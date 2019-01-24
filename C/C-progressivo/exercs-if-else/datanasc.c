#include <stdio.h>

//verificação se a data de nascimento está nos conformes
//considerando que todos os meses possuem 30 dias

int main(){

    int dia;
    int mes;
    int ano;

    printf("\tVALIDA DATA DE NASCIMENTO\n");
    printf("\nInforme somente o dia do mês que nasceu: ");
    scanf("%d", &dia);
    printf("\nInforme agora o número que corresponde ao seu mês de nascimento: ");
    scanf("%d", &mes);
    printf("\nAgora informe o ano do nascimento: ");
    scanf("%d", &ano);

    if ((dia > 30) || (mes > 12) || (ano > 2019)){
        printf("\nData inserida de maneira incorreta\n");
        printf("Dia, mês ou o ano não correspondem a uma data válida\n");
    }
    else{
        printf("\nSua data de nascimento: %d/%d/%d\n", dia, mes, ano);
        }
        getchar();
        return 0;
}
