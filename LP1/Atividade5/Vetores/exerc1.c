#include <stdio.h>

#define num 100 

void preenche (int* xs, int n)
{
        int i;
        // enquanto i for maior que n eu peço numeros
        for (i = 0; i < n; i++)
        {
                printf("numero %d: ", i);

                // pedindo inputs para cada indice do array
                scanf("%d", &xs[i]);
        }
}

float media (int* xs, int n)
{
        int soma = 0;

	// enquanto houver numeros eu somo
        for (int i = 0; i < n; i++)
        {
                soma += xs[i];
        }

	return (float)soma/n;
}

int main (void)
{
        int n = num;
        int vec[num];

        preenche(vec, n);

        printf("%.2f", media(vec, n));

        return 0;
}
