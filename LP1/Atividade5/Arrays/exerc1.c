#include <stdio.h>

#define L 3
#define C 5

void preenche (int arr[L][C], int l, int c)
{
	for (int i = 0; i < l; i++)
		for (int j = 0; j < c; j++)
		{
			printf("arr[%d][%d] = ", i, j);
			scanf("%d", &arr[i][j]);
		}
}

void printa_array (int arr[L][C], int l, int c)
{
	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < c; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		puts("");
	}
}

int main (void)
{
	int arr[L][C];

	preenche(arr, L, C);
	
	printa_array(arr, L, C);

	return 0;
}
