#include <stdio.h>

int main(){

    int cont = 1;
    int n;

    printf("\nInforme um n�mero inteiro qualquer: ");
    scanf("%d", &n);

    printf("\nN�meros �mpares at� %d \t\tN�meros pares at� %d\n\n", n, n);

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
