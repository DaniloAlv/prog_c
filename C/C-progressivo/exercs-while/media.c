#include <stdio.h>

int main(){

    int alunos;
    float mt;
    float ma;
    int count = 1;
    float somam;

    printf("\tM�DIA GERAL DOS ALUNOS\n");
    printf("\nPrimeiro, informe a quantidade de alunos na sala: ");
    scanf("%d", &alunos);

    while (count <= alunos){
        printf("\nEntre com a m�dia das notas do aluno: ");
        scanf("%f", &ma);
        somam += ma;
        count++;
    }

    mt = (somam)/alunos;

    printf("\nA m�dia geral da classe �: %.2f", mt);

    getchar();
    return 0;
}
