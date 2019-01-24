#include <stdio.h>

int main(){

    int cont = 1;
    int n;

    printf("\nInforme um número inteiro qualquer: ");
    scanf("%d", &n);

    printf("\nNúmeros ímpares até %d \t\tNúmeros pares até %d\n\n", n, n);

    while (cont <= n){
            if (cont % 2 == 1){
        printf("%10d\t", cont);
        cont++;
        }else{
            printf("\t%15d\n", cont);
            cont++;
        }
    }
    getchar();
    return 0;
}
