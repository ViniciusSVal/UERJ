#include <stdio.h>
#include <math.h>

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

int main (void)
{
        int n;

        //atribuindo inputs
        scanf("%d", &n);

        //printando se eh primo ou não
        if (eh_primo(n))
                printf("%d eh primo!\n", n);
        else
                printf("%d não eh primo\n", n);


        return 0;
}
