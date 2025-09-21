#include <stdio.h>

struct JogadorPingPong
{
	//velocidade
	int vel;
	//reflexo
	int ref;
	//precisão
	int pre;
	//saque
	int saq;
};

void ExibePropriedades (struct JogadorPingPong* j1, struct JogadorPingPong* j2, struct JogadorPingPong* j3)
{
	/*
		Jogador 1:
		velocidade: j1.vel
		reflexo: j1.ref
	       	precisão: j1.pre
		saque: j1.saq	

		Jogador 2:
		velocidade: j2.vel
		reflexo: j2.ref
	       	precisão: j2.pre
		saque: j2.saq

		Jogador 3:
		velocidade: j3.vel
		reflexo: j3.ref
	       	precisão: j3.pre
		saque: j3.saq
	*/

	struct JogadorPingPong* js[3];
       	js[0] = j1;
	js[1] = j2;
	js[2] = j3;

	for (int i = 0; i < 3; i++)
	{
		printf("Jogador %d: \nvelocidade: %d\nreflexo: %d\nprecisão: %d\nsaque: %d\n\n", 
			i+1, js[i]->vel, js[i]->ref, js[i]->pre, js[i]->saq);
	}	
}

int main (void)
{
	struct JogadorPingPong j1 = {12, 6, 7, 9};
	struct JogadorPingPong j2 = {15, 8, 5, 8};
	struct JogadorPingPong j3 = {10, 6, 9, 6};
	
	ExibePropriedades(&j1, &j2, &j3);

	return 0;
}
