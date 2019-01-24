#include <stdio.h>

int main(){

    int num;

    printf("\tVerificação para número Par ou Ímpar\n");
    printf("\nEntre com um número para verificar: ");
    scanf("%d", &num);

    if (num % 2 == 0){
        printf("\nO número %d é par\n", num);
    }
    else{
        printf("\nO número %d é ímpar\n", num);
    }

    getchar();
    return 0;

}
