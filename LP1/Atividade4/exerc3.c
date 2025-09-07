#include <stdio.h>

void compra (int* conta, int valor)
{
	*conta -= valor;
}


int main (void)
{
	int compras[] = {100, 50, 80, 30, 20};
	int conta1, conta2;
	int i;

	// atribuindo valores para as contas 
	scanf("%d", &conta1);
	scanf("%d", &conta2);

	/* quebra de linha */
	printf("\n");

	// printando valores iniciais
	printf("valores iniciais: \n");
	printf("%d\n", conta1);
	printf("%d\n", conta2);

	// para cada compra na lista
	for (i = 0; i < 5; i++)
	{
		/* quebra de linha */
		printf("\n");
		
		// falando o valor da compra
		printf("-%d\n", compras[i]);

		// efetuando a compra na conta de maior saldo
		if (conta1 > conta2)	compra(&conta1, compras[i]);
		else 			compra(&conta2, compras[i]);

		// mostrando o valor final das contas depois dessa compra
		printf("%d\n", conta1);
		printf("%d\n", conta2);
	}
	
	return 0;
}
