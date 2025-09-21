#include <stdio.h>

struct Ponto
{
	int x;
	int y;
	int z;
};

int main (void)
{
	struct Ponto v1 = {1, 0, 5};	
	struct Ponto v2 = {3, 3, 3};	
	struct Ponto v3 = {0, 10, 0};

	//exibindo a coordenada y de cada ponto 
	printf("v1 y: %d \nv2 y: %d \nv3 y: %d \n", v1.y, v2.y, v3.y);

	//somando 10 na coordenada z de cada ponto
	v1.z += 10;
	v2.z += 10;
	v3.z += 10;
	
	//printando todos os pontos 
	printf("(%d, %d, %d)\n(%d, %d, %d)\n(%d, %d, %d)\n",
			v1.x, v1.y, v1.z,
			v2.x, v2.y, v2.z,
			v3.x, v3.y, v3.z);

	return 0;
}
