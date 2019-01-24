#include <stdio.h>
#include <stdlib.h>

int main(){

    int x;
    int y;
    int trcx;
    int trcy;

    printf("\tTROCA DE VARIÁVEIS\n");
    printf("\nEntre com um valor inteiro para X: ");
    scanf("%d", &x);
    printf("\nEntre com um valor inteiro para Y: ");
    scanf("%d", &y);

    printf("\nValor de X: %d\nValor de Y: %d\n", x, y);

    trcy = x;
    trcx = y;

    system("pause");

    printf("\nOs valores depois de serem trocados\n");
    printf("\nValor de X: %d", trcx);
    printf("\nValor de Y: %d\n", trcy);

    getchar();
    return 0;
}
