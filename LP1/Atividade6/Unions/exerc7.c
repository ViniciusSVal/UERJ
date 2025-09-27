#include <stdio.h>

struct Save
{
	//horas jogadas
	float horas;

	struct {
		char ato; //em qual ato do jogo o jogador está
		float porcentagem_mapa; //porcentagem explorada do mapa do ato
		float porcentagem_ato; //porcentagem de conclusão do ato

		union {
			//ato 1	
			// ao derrotar os 2 guardiões, o player pode passar pro ato 2
			char guardioes_derrotados;

			//ato 2
			// ao encontrar as 5 chaves, o player pode passar do labirinto e entrar no ato 3
			char chaves_encontradas;
			
			//ato 3
			// ao derrotar as 3 feiticeiras malignas, o player pode zerar o jogo
			char feiticeiras_derrotadas;
		};
	};

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
	scanf("%hhd", &s->ato);

	printf("Quanto do ato foi explorado? ");
	scanf("%f", &s->porcentagem_ato);

	printf("Quanto do mapa foi explorado? ");
	scanf("%f", &s->porcentagem_mapa);

	printf("Dinheiro: ");
	scanf("%d", &s->dinheiro);

	printf("Double Jump? ");
	scanf("%b", &s->double_jump);

	printf("Wall Jump? ");
	scanf("%b", &s->wall_jump);

	switch (s->ato)
	{
		case 1: 
			printf("Quantos guardiões foram derrotados? ");
			scanf("%hhd", &s->guardioes_derrotados);
			break;
		case 2:
			printf("Quantas chaves foram achadas? ");
			scanf("%hhd", &s->chaves_encontradas);
			break;
		case 3:
			printf("Quantas feiticeiras malignas foram derrotadas? ");
			scanf("%hhd", &s->feiticeiras_derrotadas);
			break;
		default:
			//erro
	}
}

void printa_save (struct Save* s)
{	
	printf("Horas=%.1f, Dinheiro=%d, DoubleJump=%b, WallJump=%b \n",
						s->horas, s->dinheiro, s->double_jump, s->wall_jump);

	printf("Ato: %hhd \nPorcentagem do ato: %.1f% \nPorcentagem de mapa: %.1f%\n", 
						s->ato, s->porcentagem_ato, s->porcentagem_mapa);

	switch (s->ato)
	{
		case 1: printf("Guardiões restantes: %hhd\n", 2 - s->guardioes_derrotados);
			break;
		case 2: printf("Chaves restantes: %hhd\n", 5 - s->chaves_encontradas);
			break;
		case 3: printf("Feiticeitas restantes: %hhd\n", 3 - s->feiticeiras_derrotadas);
			break;
		default: 
			//erro
	}
}

int main (void)
{
	struct Save sav1;
	preenche(&sav1);

	printa_save(&sav1);

	return 0;
}
