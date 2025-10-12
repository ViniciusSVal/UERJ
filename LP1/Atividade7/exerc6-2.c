//LÊ UMA STRING DO ARQUIVO DO EXERCICIO 5-1 (COM FREAD)

#include <stdio.h>
#include <string.h>

#define n 26

int main (void)
{
	char str[n];

	FILE* f = fopen("./file5-1", "rb");
	
	fread(str, sizeof(char), n, f);
	str[n] = '\0';
	
	puts(str);
	
	fclose(f);

	return 0;
}
