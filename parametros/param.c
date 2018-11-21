#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "sumarizador.h"

int main (int argc, char *argv[]){
	
	//float v1, v2, media;
	float v1 = atoi(argv[2]);
	float v2 = atoi(argv[3]);
	FILE *fp;

	
	fp = fopen("Outubro.csv", "r");
	
	if (fp == NULL){
		printf("Erro na abertura do arquivo solicitado\n");
		exit (0);
	}
	char frase [250];
	
	while (fgets(frase, 250, fp) != NULL){
		printf("%s", frase);
	}
			
	if (argc != 2){
		printf("A quantidade de argumentos apresentados foi insuficiente\n");
		return 1;
		exit(1);
	}
	
	
	/*media = media_empenhado(v1, v2);

	if ((argv[2])==NULL){
		printf("Parâmetro de saída não identificado\n");
	}
	else if{
		printf("Media Empenhada\n %.2f", media);	//chamar função das médias 
	}*/
	
	fclose(fp);
	return 0;
}
