#include <stdio.h>

float soma(float num1, float num2){
    float som = num1 + num2;
    return som;
}
float subtrair (float num1, float num2){
    float sub = num1 - num2;
    return sub;
}
float multiplicar (float num1, float num2){
    float mult = num1 * num2;
    return mult;
}
float dividir (float num1, float num2){
    float div = num1/num2;
    return div;
}

int main (){

    float num1;
    float num2;
    float som;
    float sub;
    float mult;
    float div;
    int op;


    printf("\tCALCULADORA\n\n");
    printf("Escolha a op��o desejada: \n\n 1 - Soma\n 2 - Subtra��o\n 3 - Multiplica��o\n 4 - Divis�o\n\n");
    scanf("%d", &op);
    switch(op){

    case 1:
    printf("\nInsira um n�mero: ");
    scanf("%f", &num1);
    printf("\nInsira o segundo n�mero: ");
    scanf("%f", &num2);

    som = soma(num1, num2);

    printf("\n\tA soma dos valores fornecidos �: %.2f\n", som);
    break;

    case 2:
    printf("\nInsira um n�mero: ");
    scanf("%f", &num1);
    printf("\nInsira o segundo n�mero: ");
    scanf("%f", &num2);

    sub = subtrair(num1, num2);

    printf("\n\tA subtra��o dos valores dos fornecidos �: %.2f\n", sub);
    break;

    case 3:
    printf("\nInsira um n�mero: ");
    scanf("%f", &num1);
    printf("\nInsira o segundo n�mero: ");
    scanf("%f", &num2);

    mult = multiplicar(num1, num2);

    printf("\n\tA multiplica��o dos valores fornecidos �: %.2f\n", mult);
    break;

    case 4:
    printf("\nInsira um n�mero: ");
    scanf("%f", &num1);
    printf("\nInsira o segundo n�mero: ");
    scanf("%f", &num2);

    div = dividir(num1, num2);

    printf("\n\tA divis�o dos valores fornecidos �: %.2f", div);
    break;

    default:
    printf("O n�mero fornecido n�o � referente a nenhuma das op��es oferecidas\n Insira de 1 a 4\n");
    break;
}
    getchar();
return 0;
}
