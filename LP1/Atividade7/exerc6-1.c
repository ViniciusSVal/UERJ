//ESCREVE UMA STRING EM UM ARQUIVO (COM FWRITE)

#include <stdio.h>
#include <string.h>

int main (void)
{
	char str[26];

	printf("String de 25 caracteres: ");
	scanf("%25s", str);

	FILE* f = fopen("./file5-1", "wb");
	
	fwrite(str, sizeof(char), strlen(str), f);
	/*
	for (int i = 0; str[i] != '\0'; i++)
	{
		fputc(str[i], f);
	}
	*/
	fputc('\n', f);
	
	fclose(f);

	return 0;
}
