#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtd;
    int cont = 0;
    int qtdini;

    printf("\nEntre com um Nº inteiro: ");
    scanf("%d", &qtd);

    qtdini = qtd;

    while (cont < qtd){
        printf("\n%d patinhos foram passear, além das montanhas para brincar!\nA mamãe gritou: Quá, quá, quá, quá!!!\nMas só %d patinhos voltaram de lá\n", qtd, qtd-1);
        qtd--;
    }
    system ("pause");
    system("cls");

    printf("\nA mamãe patinha foi procurar, além das montanhas na beira do mar.\nA mamãe gritou: Quá, quá, quá, quá!\nE os %d patinhos voltaram de lá\n", qtdini);
}
