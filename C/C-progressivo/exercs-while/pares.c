#include <stdio.h>

int main(){

    int cont = 1;

    printf("\tSEQU�NCIA DOS N�MEROS PARES AT� 100\n");

        while (cont <= 100){
                if (cont%2 == 0)
            printf("\n%d", cont);
            cont++;
        }

}
