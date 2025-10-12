#include <stdio.h>

#define s 5 //quantidade de Strings
#define n 26 //Número de caracteres

void escreve_string (FILE* f, char* str)
{
	for (int i = 0; str[i] != '\0'; i++)
		fputc(str[i], f);
}

int main (void)
{
	//10 strings de 26 caracteres
	char str[s][n];

	for (int i = 0; i < s; i++)
	{
		//atribuindo uma string para cada index
		scanf("%26s", &str[i][0]);
	}

	FILE* f = fopen("./file2", "w");
	
	for (int i = 0; i < s ; i++)
	{
		escreve_string(f, &str[i][0]);	
		fputc('\n', f);
	}
	fclose(f);

	return 0;
}
