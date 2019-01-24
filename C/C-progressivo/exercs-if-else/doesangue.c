#include <stdio.h>

int main(){

    int idade;

    printf("\tCAMPANHA DE DOAÇÃO DE SANGUE\n");
    printf("Veja se você pode fazer parte da doação\n");
    printf("\nInforme sua idade: ");
    scanf("%d", &idade);

    if ((idade < 18)||(idade > 67)){
        printf("\n\tInfelizmente você não tem idade compatível para doar sangue\n");
    }
    else{
        printf("\n\tMuito bem, você poderá contribuir doando sangue!\n\t\t\tObrigado!!!\n");
    }

    getchar();
    return 0;
}
