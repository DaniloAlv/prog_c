#include <stdio.h>

int main(){

    int idade;

    printf("\tCAMPANHA DE DOA��O DE SANGUE\n");
    printf("Veja se voc� pode fazer parte da doa��o\n");
    printf("\nInforme sua idade: ");
    scanf("%d", &idade);

    if ((idade < 18)||(idade > 67)){
        printf("\n\tInfelizmente voc� n�o tem idade compat�vel para doar sangue\n");
    }
    else{
        printf("\n\tMuito bem, voc� poder� contribuir doando sangue!\n\t\t\tObrigado!!!\n");
    }

    getchar();
    return 0;
}
