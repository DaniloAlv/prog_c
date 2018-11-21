#include <stdio.h>

int fat(int n){
	
	if (n >= 1)
		
		return n * n*(n-1);		
	
}

int main()
{
	int n;
	int fatorial;

	printf("Entre com um número inteiro:");
	scanf("%d", &n);
	fatorial = fat(n);
	printf("%d\n", fatorial);

	return 0;
}


