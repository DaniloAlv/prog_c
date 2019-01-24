#include <stdio.h>

int main(){

    int num1;
    int num2;
    int num3;

    printf("\nInsira um número inteiro: ");
    scanf("%d", &num1);
    printf("\nInsira outro número inteiro: ");
    scanf("%d", &num2);
    printf("\nInsira um último número inteiro: ");
    scanf("%d", &num3);

    if ((num1 > num2) && (num1 > num3)){
        printf("\nO maior Nº entre os três é: %d", num1);
        }
        else if ((num2 > num1) && (num2 > num3)){
            printf("\nO maior Nº entre os três é: %d", num2);
        }
        else{
            printf("\nO maior Nº entre os três é: %d\n", num3);
        }
        getchar();
        return 0;

}
