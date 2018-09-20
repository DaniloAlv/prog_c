#include <stdio.h>

int main(){

	int bar;
	int foo;

	printf("Insira o valor de bar");
	scanf("%d" bar);
	printf("Insira o valor de foo");
	scanf("%d" foo);

	if (bar > foo)
	{
		printf("Bar é maior que Foo %d\n", bar, ">", foo);
	}
	else{
		printf("Foo é maior que Bar %d\n", foo, ">", bar);
	}
}