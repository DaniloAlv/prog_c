#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float baskara(float a, float b, float c){
    float delta = pow(b, 2) - (4*a*c);
    return delta;
}
float raiz1(float a, float b, float c, float delta){
    float x1 = (-b + sqrt(delta))/2*a;
    return x1;
}
float raiz2(float a, float b, float c, float delta){
    float x2 = (-b - sqrt(delta))/2*a;
    return x2;
}

int main(){

    float a;
    float b;
    float c;
    float delta;
    float x1;
    float x2;

    printf("\tEQUAÇÃO DO 2º GRAU\n");
    printf("\nEntre com o coeficiente A: ");
    scanf("%f", &a);
    printf("\nEntre com o coeficiente B: ");
    scanf("%f", &b);
    printf("\nEntre com o coeficiente C: ");
    scanf("%f", &c);

    if (a == 0)
            printf("\nO valor de A não pode ser 0\n");
    else{

    delta = baskara(a, b, c);
    x1 = raiz1(a, b, c, delta);
    x2 = raiz2(a, b, c, delta);

    printf("\n\tDELTA: %.2f\n", delta);

    system("pause");

    printf("\nAs raízes da equação são:\n");
    printf("\n\tX1: %.2f\n\tX2: %.2f\n", x1, x2);
}
    getchar();
    return 0;
}
