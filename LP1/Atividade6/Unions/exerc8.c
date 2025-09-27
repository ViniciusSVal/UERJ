#include <stdio.h>
#include <string.h>

struct Animal {
	char classe[10];
	
	char nome_especie[255];
	char cor_predominante[127];

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
	strncpy(tamandua_bandeira.nome_especie, "Myrmecophaga tridactyla", 255);
	strncpy(tamandua_bandeira.cor_predominante,  "marrom", 127);
	tamandua_bandeira.qtd_dentes 		= 0;
	tamandua_bandeira.vol_cerebral 		= 0.05;
	tamandua_bandeira.vel_terrestre 	= 50.0;

	struct Animal tartaruga_marinha;
	strncpy(tartaruga_marinha.nome_especie,  "Chelonioidea", 255);
	strncpy(tartaruga_marinha.classe, "réptil", 10);
	strncpy(tartaruga_marinha.cor_predominante,  "verde-oliva", 127);
	tartaruga_marinha.venenoso 		= false;
	tartaruga_marinha.autonomia_aqua 	= 9;
	tartaruga_marinha.esp_ovos 		= 0.2;
	
	struct Animal pombo;	
	strncpy(pombo.classe, "ave", 10);
	strncpy(pombo.nome_especie,  "Columbidae", 10);
	strncpy(pombo.cor_predominante,  "cinza", 127);
	pombo.comp_bico 			= 1.7;
	pombo.autonomia_voo 			= 7;
	pombo.freq_canto 			= 750;

	struct Animal axolote;
	strncpy(axolote.classe, "anfíbio", 10);
	strncpy(axolote.nome_especie,  "Ambystoma mexicanum", 255);
	strncpy(axolote.cor_predominante,  "marrom-acinzentado", 127);
	axolote.num_patas 			= 4;
	axolote.esp_pele 			= 0.1;
	axolote.cauda 				= true;

	struct Animal lobo_guara;
	strncpy(lobo_guara.classe, "mamífero", 10);
	strncpy(lobo_guara.nome_especie,  "Chrysocyon brachyurus", 255);
	strncpy(lobo_guara.cor_predominante,  "avermelhado", 127);
	lobo_guara.qtd_dentes 			= 42;
       	lobo_guara.vol_cerebral 		= 0.5;
	lobo_guara.vel_terrestre 		= 40.0;

	struct Animal cecilia;
	strncpy(cecilia.classe, "anfíbio", 10);
	strncpy(cecilia.nome_especie,  "Caecilia", 255);
	strncpy(cecilia.cor_predominante,  "bege", 127);
	cecilia.num_patas 			= 0;
	cecilia.esp_pele			= 0.15;
	cecilia.cauda				= true;			
}


