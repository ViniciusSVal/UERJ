#include <stdio.h>

#define L 2
#define C 2

float media (int arr[L][C], int l, int c)
{
        int soma = 0;

	// enquanto houver numeros para cada linha e coluna eu somo
        for (int i = 0; i < l; i++)
		for (int j = 0; j < c; j++)
			soma += arr[i][j];
	
	return (float)soma/(l*c);
}

void printa_array (int arr[L][C], int l, int c)
{
	/* quebra de linha */
	printf("\n");

	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < c; j++)
		{
			printf("%d", arr[i][j]);
			
			if (j < c-1) printf(", ");
		}
		
		/* quebra de linha */ 
		printf("\n");
	}
}
int main (void)
{
	int arr[L][C];
	
	// atribuindo valores
	for (int i = 0; i < L; i++)
		for (int j = 0; j < C; j++)
		{
			printf("linha %d, coluna %d: ", i+1, j+1);
			scanf("%d", &arr[i][j]);
		}
	
	// exibindo valores
	printa_array(arr, L, C);

	// printando a média dos valores
	printf("\n%.2f\n", media(arr, L, C));

	return 0;
}


