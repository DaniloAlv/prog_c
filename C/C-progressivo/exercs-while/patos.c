#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtd;
    int cont = 0;
    int qtdini;

    printf("\nEntre com um N� inteiro: ");
    scanf("%d", &qtd);

    qtdini = qtd;

    while (cont < qtd){
        printf("\n%d patinhos foram passear, al�m das montanhas para brincar!\nA mam�e gritou: Qu�, qu�, qu�, qu�!!!\nMas s� %d patinhos voltaram de l�\n", qtd, qtd-1);
        qtd--;
    }
    system ("pause");
    system("cls");

    printf("\nA mam�e patinha foi procurar, al�m das montanhas na beira do mar.\nA mam�e gritou: Qu�, qu�, qu�, qu�!\nE os %d patinhos voltaram de l�\n", qtdini);
}
