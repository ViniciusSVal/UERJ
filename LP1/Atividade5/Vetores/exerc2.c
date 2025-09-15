#include <stdio.h>

#define n 5

void arruma_vetor (int* vet, int tam)
{
	// varrendo o vetor em busca de um buraco
	for (int i = 0; i < tam; i++)
	{
		// se eu acho um buraco
		if (vet[i] == 0) 
		{
			// eu puxo os indices seguintes 1 posição para trás
			for (int j = i; j <= n-1; j++)
			{
				if (j == n-1)
				{	
					// o ultimo indice é 0
					vet[j] = 0;
					
					break;
				}

				// copiando o próximo indice
				vet[j] = vet[j+1];
			}	
		}
	}
}

void printa_vetor (int* vet, int tam)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d", vet[i]);
	
		// adicionando virgulas
		if (i+1 < n) printf(", "); 
	}
	
	/* quebra de linha */
	printf("\n");
}

int main (void)
{
	int vet[n];
	
	// atribuindo valores
	for (int i = 0; i < n; i++)
	{
		printf("numero %d: ", i+1);	
		scanf("%d", &vet[i]);
	}

	// exibindo numeros
	printa_vetor(vet, n);

	int I;
	
	// atribuindo valor ao indice I
	printf("\ndigite um indice do vetor para remover: ");
	scanf("%d", &I);
	
	// removendo indice
	vet[I] = 0;
	
	// mostrando o novo vetor
	printa_vetor(vet, n);

	// ajustando vetor
	arruma_vetor(vet, n);

	// mostrando o mais novo vetor
	printa_vetor(vet, n);

	return 0;
}



