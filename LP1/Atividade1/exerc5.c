#include <stdio.h>

int main (void)
{
    //declarando variáveis
    float v1;
    float soma = 0;

    //pedindo um valor pela primeira vez
    printf("Valor: ");
    scanf("%f", &v1);

    //se o valor for diferente de 0
    while (v1 != 0)
    {
        //eu somo o valor de v1 na soma
        soma += v1;
        printf("A soma atual é: %.2f\n", soma);

        //e eu continuo pedindo valores para somar depois ou terminar a soma
        printf("Valor: ");
        scanf("%f", &v1);
    }
    return 0;
}
