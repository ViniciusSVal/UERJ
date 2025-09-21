#include <stdio.h>

struct Save
{
	//horas jogadas
	float horas;
		
	//em qual ato do jogo o jogador está
	int ato;
	
	//dinheiro acumulado
	int dinheiro;

	//se o jogador desbloqueou pulo duplo
	bool double_jump;

	//se o jogador desbloqueou wall jump
	bool wall_jump;
};

void preenche (struct Save* s)
{
	printf("Horas jogadas: ");
	scanf("%f", &s->horas);

	printf("Ato: ");
	scanf("%d", &s->ato);

	printf("Dinheiro: ");
	scanf("%d", &s->dinheiro);
	
	printf("Double Jump? ");
	scanf("%b", &s->double_jump);

	printf("Wall Jump? ");
	scanf("%b", &s->wall_jump);	
}

int main (void)
{
	struct Save sav1;
	preenche(&sav1);

	printf("Horas=%.1f, Ato=%d, Dinheiro=%d, DoubleJump=%b, WallJump=%b\n", 
			sav1.horas, sav1.ato, sav1.dinheiro, sav1.double_jump, sav1.wall_jump);
	
	return 0;
}
