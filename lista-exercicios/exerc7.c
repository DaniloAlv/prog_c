#include <stdio.h>

int main()
{
	float n1;
	float n2;
	float n3;
	float media;
	float ma;

	printf("\n Insira a primeira nota do aluno");
	scanf ("%f" n1);
	printf("\n Insira a segunda nota do aluno");
	scanf("%f" n2);
	printf("\n Insira a terceira nota do aluno");
	scanf("%f" n3);
	media = (n1+n2+n3)/3;
	ma = (n1+(n2*2)+(n3*3)+media)/7;

	if (ma >= 9)
	{
		printf("A média de aproveitamento do aluno é: %.2f\n", ma, "A");
	}
	if (ma >= 7.5)
	{
		printf("A média de aproveitamento do aluno é: %.2f\n", ma, "B");
	}
	if (ma >= 6)
	{
		printf("A média de aproveitamento do aluno é: %.2f\n", ma, "C");
	}
	if (ma >= 4)
	{
		printf("A média de aproveitamento do aluno é: %.2f\n", ma, "D");
	}
	else
		{
			printf("A média de aproveitamento do aluno é: %.2f\n", ma, "E");

	}
		
}