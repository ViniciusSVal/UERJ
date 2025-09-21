#include <stdio.h>

#define n 10 

struct Ponto 
{
	// 10 < char < int
	char x;
	char y;
};

struct Personagem 
{
	int ident;
	struct Ponto pos;
	int pontuacao;
};	

void preenche_personagens (struct Personagem * ps, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("Personagem %d:\n", i);

		//definindo automaticamente os identificadores
		ps[i].ident = i;

		//lendo a posição do personagem
		printf("x: ");
		scanf("%hhd", &ps[i].pos.x);

		printf("y: ");
		scanf("%hhd", &ps[i].pos.x);

		//definindo a pontuação como 0
		ps[i].pontuacao = 0;
	}
}

int main (void)
{
	struct Personagem ps[n];

	preenche_personagens(ps, n);
}
