//ESCREVE UMA STRING EM UM ARQUIVO (COM FWRITE)

#include <stdio.h>

void escreve_string (FILE* f, char* str)
{
	for (int i = 0; str[i] != '\0'; i++)
		fputc(str[i], f);
}

int main (void)
{
	char str[26];

	printf("String de 25 caracteres: ");
	scanf("%25s", str);

	FILE* f = fopen("./file1", "w");
	
	escreve_string (f, str);
	fputc('\n', f);
	
	fclose(f);

	return 0;
}
