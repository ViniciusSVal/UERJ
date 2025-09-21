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
		ps[i].ident = i+1;

		//lendo a posição do personagem
		printf("x: ");
		scanf("%hhd", &ps[i].pos.x);

		printf("y: ");
		scanf("%hhd", &ps[i].pos.y);

		//definindo a pontuação como 0
		ps[i].pontuacao = 0;
	}
}

void zera_mapa (char map[10][10])
{
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
		{
			map[i][j] = -1;
		}
}

void desenha_mapa (char map[10][10])
{
	//desenhando eixo x
	//0	1	2	3	4	5	6	7	8	9
	printf("\t0\t1\t2\t3\t4\t5\t6\t7\t8\t9\n\n\n\n\n");

	for (int i = 0; i < 10; i++)
	{	
		//desenhando eixo y
		printf("%d", i);

		for (int j = 0; j < 10; j++)
		{	
			//espaçamento horizontal		
			printf("\t");
			
			//desenhando personagem se ele estiver na casa
			if (map[i][j] != -1) 	printf("%d", map[i][j]);
		}
		
		//espaçamento vertical
		printf("\n\n\n\n");
	}
}

void atualiza_mapa (char map[10][10], struct Personagem * ps, int len)
{
	//preenchendo o mapa com -1
	zera_mapa(map);

	for (int i = 0; i < len; i++)
	{
		//salvando as posições
		char _x = ps[i].pos.x;
		char _y = ps[i].pos.y;
		
		//se tiver dois personagens na mesma posição
		if (map[_y][_x] != -1) printf("erro: Sobreposição de posições: %d e %d, ponto (%d, %d)\n",
			       	map[_y][_x], ps[i].ident, _x, _y);
		
		//salvando a identidade do personagem na posição dele no mapa
		map[_y][_x] = ps[i].ident;
	}
}

int main (void)
{
	struct Personagem ps[n];
	
	char map[10][10];

	preenche_personagens(ps, n);
	
	printf("(%d, %d)", ps->pos.x, ps->pos.y);

	atualiza_mapa(map, ps, n);

	desenha_mapa(map);
}


/*	0	1	2	3	4	5	6	7	8	9




0



1



2



3



4



5



6



7



8



9

*/
