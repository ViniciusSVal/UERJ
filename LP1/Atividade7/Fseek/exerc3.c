#include <stdio.h>

int main (void)
{
	char meio;

	scanf("%c", &meio);

	FILE* f = fopen("./file3", "r+");
	
	fseek(f, 0, SEEK_END);

	fseek(f, ftell(f)/2, SEEK_SET);

	fputc(meio, f);

	return 0;
}
