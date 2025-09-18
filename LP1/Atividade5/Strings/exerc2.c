#include <stdio.h>

//função que pega o tamanho (exerc1.c)
int tamanho (char* str)
{
        int n = 0;

        while (str[n] != 0)
        {
                n++;
        }

        return n;
}

void concatena (char* cat, char* str1, char* str2)
{
        //tamanho das strings
        int t1 = tamanho(str1);
        int t2 = tamanho(str2);

        //copiando a primeira string
        for (int i = 0; i < t1; i++)
        {
                cat[i] = str1[i];
                //printf("%d %s\n", i, cat);
        }
        
        /* quebra de linha */
        printf("\n");
        
        //copiando a segunda string após a primeira, dessa vez PEGANDO o "\0"
        for (int i = 0; i <= t2; i++)
        {
                cat[i+t1] = str2[i];
                //printf("%d %s\n", i, cat);
        }
}

int main (void)
{
        char str1[]  = "hello ";
        char str2[]  = "world!";
        // "hello world!"
        char cat[13] /* = {0,0,0,0,0,0,0,0,0,0,0,0,0} */;
        
        concatena(cat, str1, str2);
        printf("%s", cat);
        
        return 0;
}
