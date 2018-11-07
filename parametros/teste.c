#include <stdio.h>
#include <stdlib.h>

int main (){
	
	FILE *arq;
	arq = fopen("ASSISTIR.txt", "r");
	
	if (arq == NULL){
	
		printf("Arquivo mencionado não existe\n");
		exit(0);
	}
	char frase [50];
	
	while (fgets(frase, 50, arq) != NULL){
		printf("%s", frase);
	}
	fclose (arq);
	return 0;
}
