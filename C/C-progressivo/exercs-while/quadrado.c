#include <stdio.h>
#include <math.h>

int main()
{
    int lado;
    int count = 1;

    printf("\nEntre com a medida do lado do quadrado: ");
    scanf("%d", &lado);

    while (count <= pow(lado, 2)){
        if (count % lado == 0)
            printf("*\n");
        else
            printf("*");
        count++;
    }
    getchar();
    return 0;
}
