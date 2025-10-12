#include <stdio.h>
#include <string.h>

#define n 26

int main (void)
{
	char str[n];

	FILE* f = fopen("./file1", "r");

	int c;

	for (int i = 0; i < n-1; i++)
	{
		c = fgetc(f);
		if ( (c < 0) || (255 < c) ) break;

		str[i] = c;
	}
	str[26] = '\0';
	
	puts(str);
	
	fclose(f);

	return 0;
}
