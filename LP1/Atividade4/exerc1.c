#include <stdio.h>

int main (void)
{
	int a, b;

	// atribuindo valores
	scanf("%d", &a);
	scanf("%d", &b);
	
	// exibindo valores
	printf("a = %d\n", a);	
	printf("b = %d\n\n", b);
	
	int* p;
	
	// atribuindo p ao maior valor entre a e b
	if (a >= b) 	p = &a;
	else 		p = &b;
	
	// diminuindo 50 do maior entre a e b
	*p -= 50;

	// printando os novos valores
	printf("a = %d\n", a);	
	printf("b = %d\n", b);
	
	return 0;
}
