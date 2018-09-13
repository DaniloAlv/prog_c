#include <stdio.h>

int main () {

	char carac;
	int numInt;
	float numR;

	printf("\n Insira um número inteiro");
	scanf("%d", &numInt);
	printf("\n Entre com um caractere");
	scanf("\n %c", &carac);
	printf("\n Insira um número real (0.00)");
	scanf("%f", &numR);
	printf("\n Caractere: %c\n Número inteiro: %d\n Número Real: %0.2f \n\n", carac, numInt, numR);
}