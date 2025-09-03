#include <stdio.h>

int eh_primo (int n)
{
        int i;


        if (n == 0)     return 0;

        //testando cada divisão possivel
        for (i = 2; i < n; i++)
        {
                if (!(n % i))
                {
                        //se ele divide ele não eh primo
                        return 0;
                }
        }

        //se ele não tem divisor ele eh primo
        return 1;
}


void todos_os_primos (int max)
{
        int i;

        //printando todos os numeros primos no intervalo fechado [1, max]
        for (i = 1; i <= max; i++)
        {
                if (eh_primo(i))
                {
                        printf("%d\n", i);
                }
        }
}

int main (void)
{
        int max;

        //atribuindo inputs
        scanf("%d", &max);


        todos_os_primos(max);

        return 0;
}
