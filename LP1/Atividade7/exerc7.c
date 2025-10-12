//SALVA/LÊ OS DADOS DE 10 PESSOAS EM/DE UM ARQUIVO  

#include <stdio.h>

#define n 4 //qtd de pessoas

struct Pessoa
{
	int idade;
	char nome[64];
	int peso;
};

void preenche_pessoa (struct Pessoa* p)
{
	printf("Idade: ");
	scanf("%d", &p->idade);
	
	printf("Nome: ");
	scanf("%s", p->nome);

	printf("Peso: ");
	scanf("%d", &p->peso);
}

void exibe_pessoas (struct Pessoa* ps, int length)
{
	for (int i = 0; i < length; i++)
	{
		puts(""); //quebra de linha
		printf("Pessoa %d\n", i+1);
		printf("Idade: %d\n", ps[i].idade);
		printf("Nome: %s\n", ps[i].nome);
		printf("Peso: %d\n", ps[i].peso);
	}
}

void escreve_pessoas (struct Pessoa* p, int length, FILE* f)
{
	for (int i = 0; i < length; i++)
	{
		fwrite(&p[i].idade, sizeof(int), 1, f);

		fwrite(&p[i].nome, sizeof(char), 63, f);

		fwrite(&p[i].peso, sizeof(int), 1, f);
	}
}

void ler_pessoas (struct Pessoa* p, int length, FILE* f)
{
	for (int i = 0; i < length; i++)
	{
		fread(&p[i].idade, sizeof(int), 1, f);

		fread(p[i].nome, sizeof(char), 63, f);
		p[i].nome[63] = '\0';

		fread(&p[i].peso, sizeof(int), 1, f);
	}
}


int main (void)
{
	struct Pessoa ps[n];
	
	char pergunta;
	
	pergunta = -1;	
	while (pergunta != 1 && pergunta != 0)
	{
		printf("Digite 1 para sobrescrever o arquivo, e 0 para ler o arquivo: ");
		scanf("%hhd", &pergunta);
	}

	if (pergunta) //sobrescrever
	{
		for (int i = 0; i < n; i++)
		{
			preenche_pessoa(&ps[i]);
		}
		
		exibe_pessoas(ps, n);

		FILE* f = fopen("./file3", "wb");

		escreve_pessoas(ps, n, f);		
	
		fclose(f);
	}
	else //ler
	{
		FILE* f = fopen("./file3", "rb");

		ler_pessoas(ps, n, f);
		fclose(f);
		
		exibe_pessoas(ps, n);
	}
}

