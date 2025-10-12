//ESCREVE UMA STRING EM UM ARQUIVO

#include <stdio.h>

int main (void)
{
	char str[26];

	printf("String de 25 caracteres: ");
	scanf("%25s", str);

	FILE* f = fopen("./file1", "w");
	
	for (int i = 0; str[i] != '\0'; i++)
	{
		fputc(str[i], f);
	}

	fclose(f);

	return 0;
}
