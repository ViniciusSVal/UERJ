//ESCREVE UMA STRING EM UM ARQUIVO (COM FWRITE)

#include <stdio.h>
#include <string.h>

int main (void)
{
	char str[26];

	printf("String de 25 caracteres: ");
	scanf("%25s", str);

	FILE* f = fopen("./file6-1", "wb");

	//escreve a string, sem o '\0'
	fwrite(str, sizeof(char), strlen(str), f);
	
	fclose(f);

	return 0;
}
