#include <stdio.h>

int main(){

    int num;
    int maior;
    int count = 1;

    printf("\tQUAL O MAIOR NÚMERO\n");

    while (count <= 10){
        printf("\nInsira um número inteiro: ");
        scanf("%d", &num);

        if (num > maior)
            maior = num;

            count++;
        }
        printf("\nO maior número fornecido foi: %d", maior);
        getchar();
        return 0;
}
