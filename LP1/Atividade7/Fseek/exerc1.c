#include <stdio.h>

#define I 4
#define E 3

int main (void)
{
	int linha;
	char idade[I];	
	char estado[E];

	puts("Qual linha do arquivo ler?");
	scanf("%d", &linha);
	
	if ((linha < 1) || (3 < linha))
	{
		puts("registro nao encontrado");

		return -1;
	}	

	FILE* f = fopen("./file1", "r");

	//indo para a linha desejada, e na coluna das idades
	fseek(f, (linha-1)*22 + 9, SEEK_SET);
	
	//copiando idade 
	fread(idade, sizeof(char), I, f);
	idade[I-1] = '\0';
	
	//indo para a coluna dos estados
	fseek(f, 6, SEEK_CUR);

	//copiando estado
	fread(estado, sizeof(char), E, f);
	estado[E-1] = '\0';

	//printando resultados
	printf("idade: %s\n", idade);
	printf("estado: %s\n", estado);
	
	return 0;
}
