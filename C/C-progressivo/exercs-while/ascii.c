#include <stdio.h>

int main()
{
    int count = 0;

    printf("\tTABELA ASCII\n\n");

    while (count <= 256){
        printf("%d = %c\n", count, count);
        count++;
        }
}
