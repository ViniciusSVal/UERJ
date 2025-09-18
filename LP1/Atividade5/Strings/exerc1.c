#include <stdio.h>

int tamanho (char* str)
{
        //tamanho começa em 0
        int n = 0;

        //enquanto não achar um '\0'
        while (str[n] != 0)
        {
                n++;
        }

        return n;
}

int main (void)
{
        char string[] = "hello world!"; // 12

        printf("%d\n", tamanho(string));

        return 0;
}
