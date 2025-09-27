#include <stdio.h>
#include <string.h>

union cidadao
{
	long int cpf;
	long int rg;
	char nome[256];
};


int main (void)
{
	union cidadao p1;

	p1.cpf = 23463717384;
	printf("CPF: %d\n", p1.cpf);

	p1.rg = 629487238;
	printf("RG: %d\n", p1.rg);
	
	strncpy(p1.nome, "Jonas Garcia Ferreira", 22);
	printf("Nome: ");
	puts(p1.nome);

	return 0;
}


