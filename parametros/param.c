#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "sumarizador.h"

int main (int argc, char *argv[]){
	
	FILE *fp;
	
	fp = fopen("Outubro.csv", "r");
	
	if (fp = fopen(argv[1], "r") == NULL){
		printf("Erro na abertura do arquivo solicitado\n");
		exit (1);
	}
			
	if (argc != 2){
		fprintf(stderr, "A quantidade de argumentos apresentados foi insuficiente\n", argv[0]);
		return 1;
		exit(1);
	}
	
			
	if ((argv[2])==NULL){
		printf("Parâmetro de saída não identificado\n");
	}
	else if{
		fprintf(argv[2]);	//chamar função das médias 
	}
	
	fclose(fp);
	return 0;
}
