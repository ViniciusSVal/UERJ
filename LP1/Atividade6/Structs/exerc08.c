#include <stdio.h>

#define n 10

struct Ponto
{
	int x;
	int y;
};

void preenche_ponto (struct Ponto * p)
{
	//x
	printf("x: ");
	scanf("%d", &p->x);
	
	//y
	printf("y: ");
	scanf("%d", &p->y);
	
	/* quebra de linha */
	printf("\n");
}

void preenche_vetor (struct Ponto * ps, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("Ponto %d: \n", i+1);
		preenche_ponto(&ps[i]);

		/* quebra de linha */
		printf("\n");
	}
}

struct Ponto mais_distante (struct Ponto * ps, int len)
{
	int dist = 0;
	int max_dist = -1;
	struct Ponto * max_ponto;

	int _y;
	int _x;

	for (int i = 0; i < len; i++)
	{
		_x = ps[i].x;
		_y = ps[i].y;	

		//calculando a distancia
		dist = _x*_x + _y*_y;

		//salvando a maior distancia
		if (dist > max_dist)	
		{
			max_dist = dist;
			max_ponto = &ps[i];  	
		}
	}

	return *max_ponto;
}

int main (void)
{
	struct Ponto ps[n];

	preenche_vetor(ps, n);
	
	struct Ponto longe = mais_distante(ps, n);

	printf("ponto mais longe: (%d,%d)", longe.x, longe.y);
}
