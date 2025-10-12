//ESCREVE 10 STRINGS EM UM ARQUIVO (COM FWRITE)

#include <stdio.h>

#define s 10 //quantidade de Strings
#define n 26 //Número de caracteres

int main (void)
{
	//10 strings de 26 caracteres
	char str[s][n];

	for (int i = 0; i < s; i++)
	{
		//atribuindo uma string para cada index
		scanf("%25s", &str[i][0]);
	}

	FILE* f = fopen("./file6-2", "wb");
	
	for (int i = 0; i < s ; i++)
	{
		fwrite(&str[i][0], sizeof(char), n-1, f);
		str[i][n-1] = '\0';	
	}

	fclose(f);

	return 0;
}
