#include <stdio.h>
#include <stdlib.h>

float salary(int x, float y){
    float s;
    s = x * y;

    return s;
}

int main() {
    int num_funcionario, horas_trab;
    float valor_p_hora, salario;

    scanf("%d %d %f", &num_funcionario, &horas_trab, &valor_p_hora);

    salario = salary(horas_trab, valor_p_hora);

    printf("NUMBER = %d\n", num_funcionario);
    printf("SALARY = U$ %.2f\n", salario);
return 0;
}