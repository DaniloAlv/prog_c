#include <stdio.h>

int main(){

    int num;

    printf("\tVerifica��o para n�mero Par ou �mpar\n");
    printf("\nEntre com um n�mero para verificar: ");
    scanf("%d", &num);

    if (num % 2 == 0){
        printf("\nO n�mero %d � par\n", num);
    }
    else{
        printf("\nO n�mero %d � �mpar\n", num);
    }

    getchar();
    return 0;

}
