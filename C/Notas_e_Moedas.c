#include <stdio.h>

int main()
{
    double valor_ini;
    int centavos;
    int notas100, notas50, notas20, notas10, notas5, notas2, notas1 ,resto100, resto50, resto20, resto10, resto5, resto2, resto1, moedas1, moedas50, moedas25, moedas10, moedas5, moedas01, rest_m1, rest_m50, rest_m25, rest_m10, rest_m5, rest_m01, conversao;

    //float moedas1, moedas50, moedas25, moedas10, moedas5, moedas01, rest_m1, rest_m50, rest_m25, rest_m10, rest_m5, rest_m01;

   scanf("%lf", &valor_ini);

    //conversão para centavos
    centavos = valor_ini*100;

    //NOTAS
    notas100 = centavos/10000;
    resto100 = centavos%10000;
    notas50 = resto100/5000;
    resto50 = resto100%5000;
    notas20 = resto50/2000;
    resto20 = resto50%2000;
    notas10 = resto20/1000;
    resto10 = resto20%1000;
    notas5 = resto10/500;
    resto5 = resto10%500;
    notas2 = resto5/200;
    resto2 = resto5%200;

    //MOEDAS
    moedas1 = resto2/100;
    rest_m1 = resto2%100;
    moedas50 = rest_m1/50;
    rest_m50 = rest_m1%50;
    moedas25 = rest_m50/25;
    rest_m25 = rest_m50%25;
    moedas10 = rest_m25/10;
    rest_m10 = rest_m25%10;
    moedas5 = rest_m10/5;
    rest_m5 = rest_m10%5;
    moedas01 = rest_m5;

    printf("NOTAS:\n");
   printf("%d nota(s) de R$ 100.00\n", notas100);
   printf("%d nota(s) de R$ 50.00\n", notas50);
   printf("%d nota(s) de R$ 20.00\n", notas20);
   printf("%d nota(s) de R$ 10.00\n", notas10);
   printf("%d nota(s) de R$ 5.00\n", notas5);
   printf("%d nota(s) de R$ 2.00\n", notas2);

   printf("MOEDAS:\n");
   printf("%d moeda(s) de R$ 1.00\n", moedas1);
   printf("%d moeda(s) de R$ 0.50\n", moedas50);
   printf("%d moeda(s) de R$ 0.25\n", moedas25);
   printf("%d moeda(s) de R$ 0.10\n", moedas10);
   printf("%d moeda(s) de R$ 0.05\n", moedas5);
   printf("%d moeda(s) de R$ 0.01\n", moedas01);

   return 0;
}