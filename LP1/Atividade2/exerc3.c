#include <stdio.h>

/*

- vetor 50 ints
- cada index guarda um valor inteiro de -100 a 100
- ler as 50 temperaturas
- calcular media das temperaturas
exibir quantidade de temperaturas acima da temperatura média
usar %hhd

*/

#define n 5

int main (void)
{
    //n numeros inteiros de 2 bytes
    char temperaturas[n-1];
    int i;
    int soma = 0;
    float media = 0;
    int acima_da_media = 0;

    //registrando todas as temperaturas do array
    for (i = 0; i < n; i++)
    {
        printf("temperatura %d: ", i + 1);
        scanf("%hhd", &temperaturas[i]);
    }

    //printando todas as temperaturas do array
    for (i = 0; i < n; i++)
    {
        printf("%hhd, ", temperaturas[i]);
    }

    printf("\n");

    //calculando média
    for (i = 0; i < n; i++)
    {
        soma += temperaturas[i];
    }
    media = soma/n;

    //printando todas as temperaturas do array
    for (i = 0; i < n; i++)
    {
        if (temperaturas[i] > media)    acima_da_media++;
    }
    printf("%hhd", acima_da_media);

    return 0;
}
