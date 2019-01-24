#include <stdio.h>

int main(){

    int cont = 1;

    printf("\tSEQUÊNCIA DOS NÚMEROS PARES ATÉ 100\n");

        while (cont <= 100){
                if (cont%2 == 0)
            printf("\n%d", cont);
            cont++;
        }

}
