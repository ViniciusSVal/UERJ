#include <stdio.h>

enum Moedas {
	M_real,
	M_euro,
	M_dolar
};

struct Preco {	
	//identificação da union
	char tag;
	union 
	{
		float real;
		float euro;
		float dolar;
	};
};

void exibe (float valor, char tag)
{
	//dependendo do tipo de valor
	switch (tag)
	{
		case M_real:	printf("R$");		break;
		case M_euro:	printf("€");		break;
		case M_dolar:	printf("$");		break;
		default:
			//erro
	}
	
	printf("%.2f", valor);
}

void altera (struct Preco* pr, char* tag, char altera)
{
	/*
		real 	euro 	dolar 
		1	1	0		2 + 4 = 6 
		1	0	1		1 + 4 = 5
		0	1	1		1 + 2 = 3

		1.00	0.16	0.19
			1.00	1.17

	*/

	//definindo o valor da cotação a ser utilizado  
	int cotacao = 4*((*tag == M_real)||(altera == M_real)) + 2*((*tag == M_euro)||(altera == M_euro)) + ((*tag == M_dolar)||(altera == M_dolar));
	printf("%d%d%d\n", ((*tag == M_real)||(altera == M_real)), ((*tag == M_euro)||(altera == M_euro)), ((*tag == M_dolar)||(altera == M_dolar)));	
	printf("%d, %d\n", *tag, altera);

	//declarando variáveis importantes
	float valor;
	switch (*tag)
	{
		case M_real:	valor = pr->real;	break;
		case M_euro: 	valor = pr->euro;	break;
		case M_dolar: 	valor = pr->dolar;	break;
		default:
			//erro
	}
	float conversao = valor;

	//calculando a conversão
	switch (cotacao)
	{
		case 6:		conversao = (altera == M_real) ? conversao*0.16 : conversao/0.16;		
			break;
		case 5:		conversao = (altera == M_real) ? conversao*0.19 : conversao/0.16;
			break;
		case 3:		conversao = (altera == M_euro) ? conversao*1.17 : conversao/1.17;
			break;
		default:
			//erro
	}
	
	printf("%d ", cotacao);
	//printf("%.2f", conversao/0.16);
	
	//printando bonitinho
	exibe(valor, *tag);
	printf(" -> ");
	exibe(conversao, altera);
	puts("");
	
	//atualizando o valor na struct
	switch (*tag)
	{
		case M_real:	pr->real = conversao;	break;
		case M_euro: 	pr->euro = conversao;	break;
		case M_dolar: 	pr->dolar = conversao;	break;
		default:
			//erro
	}
}	

int main (void)
{
	struct Preco pr;

	{ //bloco para a pergunta
		//variavel apenas para a pergunta seguinte
		unsigned char pergunta = 3;

		//perguntando para saber se é real, euro ou dolar
		while (pergunta >= 3)
		{
			printf("digite 0 p/ real, 1 p/ euro, ou 2 p/ dolar: ");
			scanf("%d", &pergunta);
		}
		
		//salvando o tipo do valor na tag
		pr.tag = pergunta;

	}

		printf("%d\n", pr.tag);
	//atribuindo valor
	printf("Valor: ");
		
	switch (pr.tag)
	{
		case M_real: 		scanf("%f", &pr.real);		break;
		case M_euro: 		scanf("%f", &pr.euro);		break;
		case M_dolar: 		scanf("%f", &pr.dolar);		break;
		default:
			//erro
	}
	
	
	{ //bloco para a pergunta do altera()
		//variavel apenas para a pergunta
		unsigned char pergunta = 3;

		//perguntando para saber se é real, euro ou dolar
		while (pergunta >= 3)
		{
			printf("converter: digite 0 p/ real, 1 p/ euro, ou 2 p/ dolar: ");
			scanf("%d", &pergunta);
		}
		printf("%d\n", pergunta);
		altera(&pr, &pr.tag, pergunta);
	}


	//exibe(pr.real, pr.tag);	
	


	return 0;
}
