#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, c, j;
    double soma = 0;
    char op;
    double mat[12][12];

    scanf("%c", &op);

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &mat[i][j]);

            if(i != j && i + j > 11 && i >= 7 && j < i){
                soma+=mat[i][j];
            }
        }
    }

    if (op == 'M'){
        soma/=30;
    }

    printf("%.1lf\n", soma);

    return 0;
}