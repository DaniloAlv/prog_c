#include <stdio.h>

int main()
{
    int num;
    int count = 1;
    int result;

    printf("\n\tTABUADA\n");
    printf("\nEntre com um valor inteiro para mostrar a tabuada desse número: ");
    scanf("%d", &num);

    while (count <= 10){
        result = num * count;
        printf("%d X %d = %d\n", num, count, result);
        count++;
    }
    getchar();
    return 0;
}
