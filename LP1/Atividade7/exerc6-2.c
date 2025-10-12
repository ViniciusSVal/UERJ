#include <stdio.h>
#include <string.h>

#define n 26

int main (void)
{
	char str[n];

	FILE* f = fopen("./file1", "rb");
	
	fread(str, sizeof(char), n, f);
	str[n] = '\0';
	
	puts(str);
	
	fclose(f);

	return 0;
}
