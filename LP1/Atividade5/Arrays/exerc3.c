#include <stdio.h>

#define L 3

void preenche (int arr[L][L], int l)
{
	for (int i = 0; i < l; i++)
		for (int j = 0; j < l; j++)
		{
			printf("arr[%d][%d] = ", i, j);
			scanf("%d", &arr[i][j]);
		}
}

void printa_array (int arr[L][L], int l)
{
	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < l; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		puts("");
	}
}

int det (int arr[L][L], int l)
{	
	//(00*11*22 + 01*12*20 + 02*10*21) - (...)
	
	int soma = 0;

	int mult = 1;

	for (int c = 0; c < l; c++)
	{
		int i = 0;
		int j = c;
		
		mult = 1;	
	
		while (i < l)
		{
			mult *= arr[i][j];
			// 0 + 1*5*9 + 2*6*7 + 3*6*0 
			i++;
			j = (j+1)%l;
		}
		//printf("%d\n", mult);
		soma += mult;
	}

	mult = 1;

	//puts("");
	for (int c = 0; c < l; c++)
	{
		int i = 0;
		int j = c;
		
		mult = 1;
		// 0 - 1*
		while (i < l)
		{
			mult *= arr[i][j];	
	
			i++;
			j = (j-1+l)%l;
		}
		//printf("%d\n", mult);
		soma -= mult;
	}

	return soma;
}

int main (void)
{
	int arr[L][L];

	preenche(arr, L);
	
	printa_array(arr, L);

	printf("%d", det(arr, L));

	return 0;
}
