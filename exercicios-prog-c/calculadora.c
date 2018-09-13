#include <stdio.h>
# include <stdlib.h>

float n1, n2;

void lerNum() {
	fflush(stdin);
		puts("Insira o primeiro número");
		scanf("%f", &n1);

		puts("Insira o segundo número");
		scanf("%f", &n2);
}

float soma (float n1, int n2){
	return n1+n2;
}

float subtrair (float n1, int n2){
	return n1-n2;
}

float mult (float n1, int n2){
	return n1*n2;
}

float dividir (float n1, int n2){
	return n1/n2;
}

int main (int argc, char *argv[]){
	int op;

	puts("Calculadora:");
	puts("Escolha uma das operações \n \n1 + \n2 - \n3 * \n4 / \n");
	scanf("%d", &op);

	if (op==1)
	{
		lerNum();
		printf("Resposta: %2.2f", soma(n1,n2));
	}
	else
		if(op==2){
			lerNum();
			printf("Resposta: %2.2f", subtrair(n1,n2));
		}
		else
			if(op=3){
				lerNum();
				printf("Resposta: %2.2f", mult(n1,n2));
			}
			else
				if(op==4){
					lerNum();
					if(n2!=0){
						printf("Resposta: %2.2f", dividir(n1,n2));
					}
					else{
						printf("Dividendo Inváido! \n");
					}
				}
				else{
					printf("Opção Inválida! \n");
				}
				printf("\n");
				return 0;
}