#include <stdio.h>

float calcMedia(float n1, float n2, float n3){
    float media = (n1+n2+n3)/3;
    return media;
}

int main(){

    float n1;
    float n2;
    float n3;
    float media;

    printf("\tMÉDIA DE NOTAS\n");
    printf("\nInsira a primeira nota: ");
    scanf("%f", &n1);
    printf("\nEntre com a segunda nota: ");
    scanf("%f", &n2);
    printf("\nAgora informe a terceira nota: ");
    scanf("%f", &n3);

    media = calcMedia(n1, n2, n3);

    if (media >= 7){
        printf("\nParabéns você foi aprovado com nota %.2f!\n", media);
    }
    else if((media < 7)&&(media >=4)){
        printf("\nSua nota foi %.2f, ainda tem o direito de recuperação!\n", media);
    }
    else{
        printf("\nVocê foi reprovado com nota %.2f\n", media);
    }

    getchar();
    return 0;
}
