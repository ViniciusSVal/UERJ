#include <stdio.h>

struct Personagem 
{
	int forca;
        int energia;
        int experiencia;
};

struct Personagem preencheA (void)
{
	int fo, en, exp = 0;
	
	printf("Força: ");
	scanf("%d", &fo);

	printf("Energia: ");
	scanf("%d", &en);

	printf("Experiência: ");
	scanf("%d", &exp);
	
	return (struct Personagem) {fo, en, exp};
}

int main (void)
{
        //iniciando personagem 1
        printf("Personagem 1:\n");
	struct Personagem p1 = preencheA();
	
	/* quebra de linha */
	printf("\n");

        //iniciando personagem 2
        printf("Personagem 2:\n");
	struct Personagem p2 = preencheA();

	/* quebra de linha */
	printf("\n");

	//printando todo mundo
	printf("(%d, %d, %d) vs (%d, %d, %d)\n", 
			p1.forca, p1.energia, p1.experiencia, 
			p2.forca, p2.energia, p2.experiencia);
        
	return 0;
}
