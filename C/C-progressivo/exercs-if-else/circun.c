#include <stdio.h>
#include <math.h>

//valor de pi sendo 3,14
float diametro(float raio){
    float diam = 2*raio;
    return diam;
}
float comprimento(float raio){
    float comp = 6.28*raio;
    return comp;
}
float areac(float raio){
    float area = 3.14*(pow(raio, 2));
    return area;
}

int main(){

    float raio;
    float diam;
    float comp;
    float area;

    printf("\tMEDIDAS DA CIRCUNF�RENCIA\n");
    printf("\nInsira a medida do raio da circunfer�ncia: ");
    scanf("%f", &raio);

    diam = diametro(raio);
    comp = comprimento(raio);
    area = areac(raio);

    printf("\n\nRaio da Circunfer�ncia: %.2f", raio);
    printf("\nDi�metro da Circunfer�ncia: %.2f", diam);
    printf("\nComprimento da Circunfer�ncia: %.2f", comp);
    printf("\n�rea da Circunfer�ncia: %.2f\n", area);

    getchar();
    return 0;
}
