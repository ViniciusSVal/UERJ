#include <stdio.h>

int main (void)
{
    //declarando variáveis
    int n, i;
    int soma = 0;
    
    //atribuindo valor de n
    printf("Valor de N: ");
    scanf("%d", &n);

    //calculando somatório
    for(i = 1; i <= n; i = i + 1)
    {
        soma += i*i;
        //printf("%d\n", soma);
    }

    //printando resultado
    printf("O resultado do somatório foi: %d", soma);
    
    return 0;
}
