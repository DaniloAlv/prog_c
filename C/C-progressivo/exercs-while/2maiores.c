#include <stdio.h>

int main()
{
    int maior = 0;
    int seg_maior = 0;
    int num;
    int count = 1;

    printf("\tOS DOIS MAIORES VALORES\n");

    while (count <= 10){
        printf("\nDigite um número inteiro: ");
        scanf("%d", &num);

        if (num > maior){
           seg_maior = maior;
           maior = num;
        }
    else if ((num < maior) && (num > seg_maior))
            seg_maior = num;

        count++;
    }
    printf("\nOs dois maiores valores fornecidos são %d e %d", maior, seg_maior);
    getchar();
    return 0;
    }
