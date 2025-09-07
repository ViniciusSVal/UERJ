#include <stdio.h>

void troca (int* a, int* b)
{
	int aux = *a;
	*a = *b;
	*b = aux;	
}	      

int main (void)
{
	int x, y;
	
	// atribuindo valores
	scanf("%d", &x);
	scanf("%d", &y);

	/* quebra de linha */
	printf("\n");

	// exibindo os valores
	printf("%d\n", x);
	printf("%d\n", y);
	

	// trocando os ponteiros
	troca(&x, &y);
	
	/* quebra de linha */
	printf("\n");

	// exibindo novos valores
	printf("%d\n", x);
	printf("%d\n", y);
	
	return 0;
}	
