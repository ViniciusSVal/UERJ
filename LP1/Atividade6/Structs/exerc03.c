#include <stdio.h>

struct Personagem 
{
	int forca;
        int energia;
        int experiencia;
};

void preencheB (struct Personagem* p)
{
	printf("Força: ");
	scanf("%d", &p->forca);

	printf("Energia: ");
	scanf("%d", &p->energia);

	printf("Experiência: ");
	scanf("%d", &p->experiencia);
}

int main (void)
{
        //iniciando personagem 1
        printf("Personagem 1:\n");
	struct Personagem p1;
	preencheB(&p1);
	
	/* quebra de linha */
	printf("\n");

        //iniciando personagem 2
        printf("Personagem 2:\n");
	struct Personagem p2;
	preencheB(&p2);

	/* quebra de linha */
	printf("\n");

	//printando todo mundo
	printf("(%d, %d, %d) vs (%d, %d, %d)\n", 
			p1.forca, p1.energia, p1.experiencia, 
			p2.forca, p2.energia, p2.experiencia);
        
	return 0;
}
