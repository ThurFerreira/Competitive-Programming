#include <stdio.h>

int main() {

    int ano, mes, dia, rest_mes, rest_ano, rest_dia;

    scanf("%d", &dia);

    ano = dia/365;
    rest_ano = dia%365;
    mes = rest_ano/30;
    rest_mes = rest_ano%30;
    dia = rest_mes%30;

    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);
    return 0;
}