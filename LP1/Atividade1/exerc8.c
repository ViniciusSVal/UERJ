#include <stdio.h>

int main (void)
{
    //definindo variáveis
    int n1, n2, i;

    //atribuindo valores
    printf("n1: ");
    scanf("%d", &n1);
    printf("n2: ");
    scanf("%d", &n2);
    
    //printando
    for (i = n1 + 1; i < n2; i++)   printf("%d, ", i);
}
