#include <stdio.h>

int main()
{
        int lado;
        int count = 1;

    printf("\nInsira a medida do lado do quadrado: ");
    scanf("%d", &lado);

    //imprimir a primeira linha
    while (count <= lado){
        printf("*");
        count++;
    }
    printf("\n");

    count = 1;

    while (count <= lado*(lado-2)){
        if (count % lado == 1)
            printf("*");

        else if (count % lado == 0){
        printf("*\n");
}
        else{
            printf(" ");
        }
        count++;
    }
    //imprimir a última linha
    count = 1;
    while (count <= lado){
        printf("*");
        count++;
    }
    printf("\n");

        getchar();
        return 0;
}
