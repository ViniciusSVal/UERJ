#include <stdio.h>
#include <string.h>

/*
times 20
vitoria 3
empate 1
derrota 0
*/

#define n 20

struct time 
{
    char nome[255];
    int vitorias;
    int empates;
    int derrotas;
    int pontuacao; 
};

struct time times[n-1];

int main (void)
{
    int i;
    int maior_ponto = 0;
    int menor_ponto = __INT_MAX__;
    char maior_time[255] = "";
    char menor_time[255] = "";

    //registrando times
    for (i = 0; i < n; i++)
    {
        //pegando os nomes (em 3 letras) dos times
        printf("Time %d: ", i+1);
        scanf("%s", times[i].nome);

        //pegando as vitórias empates e derrotas
        printf("Vitórias do time %s: ", times[i].nome);
        scanf("%d", &times[i].vitorias);

        printf("Empates do time %s: ", times[i].nome);
        scanf("%d", &times[i].empates);

        //printf("Derrotas do time %s: ", times[i].nome);
        //scanf("%d", &times[i].derrotas);

        //calculando os meus pontos
        times[i].pontuacao = 3*times[i].vitorias + times[i].empates; 

        //verificando se esse time é o melhor ou pior pontuador e atualizando o recorde de pontos
        if (maior_ponto < times[i].pontuacao)           maior_ponto = times[i].pontuacao;
        if (menor_ponto > times[i].pontuacao)           menor_ponto = times[i].pontuacao;
    }

    //printf("maior ponto: %d\n", maior_ponto);
    //printf("menor ponto: %d\n", menor_ponto);

    //verificando quem são os recordistas
    for (i = 0; i < n; i++)
    {
        if (times[i].pontuacao == maior_ponto)
        {
            //o \0 é um caractere q indica que uma string terminou, se o primeiro valor da string for \0, então ela é vazia
            if (maior_time[0] == '\0')   strcpy(maior_time, times[i].nome);
            else                    
            {
                strcat(maior_time, ", ");
                strcat(maior_time, times[i].nome);
            }
        }

        if (times[i].pontuacao == menor_ponto)
        {
            //o \0 é um caractere q indica que uma string terminou, se o primeiro valor da string for \0, então ela é vazia
            if (menor_time[0] == '\0')   strcpy(menor_time, times[i].nome);
            else                    
            {
                strcat(menor_time, ", ");
                strcat(menor_time, times[i].nome);
            }
        }
    }

    printf("maior(es) time:\n%s: %d pontos\n", maior_time, maior_ponto);
    printf("menor(es) time:\n%s: %d pontos\n", menor_time, menor_ponto);
    return 0;
}
