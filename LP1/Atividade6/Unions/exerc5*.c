#include <stdio.h>

struct Animal {
	union {
		//anfibio
		struct {
			int num_patas;
			float esp_pele;
			char cauda;
		};
	
		//ave
		struct {
			float comp_bico;
			int autonomia_voo;
			int freq_canto;
		};

		//mamifero
		struct {
			int qtd_dentes;
			float vol_cerebral;
			float vel_terrestre;
		};
		
		//reptil
		struct {
			char venenoso;
			int autonomia_aqua;
			float esp_ovos;
		};
		
		//struct anfibio anfibio;
		//struct ave ave;
		//struct mamifero mamifero;
		//struct reptil reptil;
	};
};

int main (void)
{
	struct Animal tamandua_bandeira;
	tamandua_bandeira.qtd_dentes 	= 0;
	tamandua_bandeira.vol_cerebral 	= 0.05;
	tamandua_bandeira.vel_terrestre = 50.0;

	struct Animal tartaruga_marinha;
	tartaruga_marinha.venenoso 		= 0;
	tartaruga_marinha.autonomia_aqua 	= 9;
	tartaruga_marinha.esp_ovos 		= 0.2;
	
	struct Animal pombo;
	pombo.comp_bico 	= 1.7;
	pombo.autonomia_voo 	= 7;
	pombo.freq_canto 	= 750;
}
