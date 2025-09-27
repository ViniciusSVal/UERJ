#include <stdio.h>
#include <string.h>

struct Animal {
	char classe[10];

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
	strncpy(tamandua_bandeira.classe,  "mamífero", 10);
	tamandua_bandeira.qtd_dentes 		= 0;
	tamandua_bandeira.vol_cerebral 		= 0.05;
	tamandua_bandeira.vel_terrestre 	= 50.0;

	struct Animal tartaruga_marinha;
	strncpy(tartaruga_marinha.classe, "réptil", 10);
	tartaruga_marinha.venenoso 		= false;
	tartaruga_marinha.autonomia_aqua 	= 9;
	tartaruga_marinha.esp_ovos 		= 0.2;
	
	struct Animal pombo;
	strncpy(pombo.classe, "ave", 10);
	pombo.comp_bico 			= 1.7;
	pombo.autonomia_voo 			= 7;
	pombo.freq_canto 			= 750;

	struct Animal axolote;
	strncpy(axolote.classe, "anfíbio", 10);
	axolote.num_patas 			= 4;
	axolote.esp_pele 			= 0.1;
	axolote.cauda 				= true;

	struct Animal lobo_guara;
	strncpy(lobo_guara.classe, "mamífero", 10);
	lobo_guara.qtd_dentes 			= 42;
       	lobo_guara.vol_cerebral 		= 0.5;
	lobo_guara.vel_terrestre 		= 40.0;

	struct Animal cecilia;
	strncpy(cecilia.classe, "anfíbio", 10);
	cecilia.num_patas 			= 0;
	cecilia.esp_pele			= 0.15;
	cecilia.cauda				= true;			
}
