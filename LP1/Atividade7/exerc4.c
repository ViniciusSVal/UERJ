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

	FILE* f = fopen("./file2", "w");
	
	for (int i = 0; i < s ; i++)
		for (int j = 0; str[i][j] != '\0'; j++)
			fputc(str[i][j], f);

	fclose(f);

	return 0;
}
