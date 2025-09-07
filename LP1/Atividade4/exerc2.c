#include <stdio.h>

void compra (int* conta, int valor)
{
	// o valor é descontado da conta
	*conta -= valor;
}

int main (void)
{
	int conta1;
	int conta2;

	// atribuindo valores
	scanf("%d", &conta1);
	scanf("%d", &conta2);
	
	/* quebra de linha */
	printf("\n");

	// efetuando a compra de 500 reais na conta com maior saldo
	if (conta1 > conta2)	compra(&conta1, 500);
	else 			compra(&conta2, 500);

	// exibindo os saldos resultantes
	printf("%d\n", conta1);
	printf("%d\n", conta2);

	return 0;
}
