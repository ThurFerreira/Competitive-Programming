#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, c, j;
    double soma = 0;
    char op;
    double mat[12][12];

    scanf("%d", &c);
    scanf(" %c", &op);

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &mat[i][j]);

            if(j == c){
                soma+=mat[i][c];
            }
        }
    }

    if (op == 'M'){
        soma/=12;
    }

    printf("%.1lf\n", soma);

    return 0;
}