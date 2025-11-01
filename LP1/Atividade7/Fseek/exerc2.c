#include <stdio.h>
#include <assert.h>

int ftamanho (FILE* f)
{
	fseek(f, 0, SEEK_SET);
	
	int n = 0;

	while (fgetc(f) != EOF) n++;

	return n;	
}

int main (void)
{
	FILE* f = fopen("./file2", "r");
	assert(f != NULL);

	printf("tamanho: %d\n", ftamanho(f));

	return 0;	
}
