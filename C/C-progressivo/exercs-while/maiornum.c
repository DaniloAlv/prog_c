#include <stdio.h>

int main(){

    int num;
    int maior;
    int count = 1;

    printf("\tQUAL O MAIOR N�MERO\n");

    while (count <= 10){
        printf("\nInsira um n�mero inteiro: ");
        scanf("%d", &num);

        if (num > maior)
            maior = num;

            count++;
        }
        printf("\nO maior n�mero fornecido foi: %d", maior);
        getchar();
        return 0;
}
