#include <stdio.h>

union Ponto {	
	struct {
		int x;
		int y;
		int z;
	};

	int vec[3];
};

int main (void)
{
	union Ponto p1;
	p1.vec[0] = 10;
	p1.vec[1] = 20;
	p1.vec[2] = 30;

	printf("(%d, %d, %d)\n", p1.x, p1.y, p1.z);
}
