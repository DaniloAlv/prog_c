#include <stdio.h>

//verifica��o se a data de nascimento est� nos conformes
//considerando que todos os meses possuem 30 dias

int main(){

    int dia;
    int mes;
    int ano;

    printf("\tVALIDA DATA DE NASCIMENTO\n");
    printf("\nInforme somente o dia do m�s que nasceu: ");
    scanf("%d", &dia);
    printf("\nInforme agora o n�mero que corresponde ao seu m�s de nascimento: ");
    scanf("%d", &mes);
    printf("\nAgora informe o ano do nascimento: ");
    scanf("%d", &ano);

    if ((dia > 30) || (mes > 12) || (ano > 2019)){
        printf("\nData inserida de maneira incorreta\n");
        printf("Dia, m�s ou o ano n�o correspondem a uma data v�lida\n");
    }
    else{
        printf("\nSua data de nascimento: %d/%d/%d\n", dia, mes, ano);
        }
        getchar();
        return 0;
}
