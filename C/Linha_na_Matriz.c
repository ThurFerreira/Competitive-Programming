#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, l, j;
    double soma;
    char op;
    double mat[12][12];

    scanf("%d", &l);
    scanf(" %c", &op);

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &mat[i][j]);

            if(i == l){
                soma+=mat[l][j];
            }
        }
    }

    if (op == 'M'){
        soma/=12;
    }

    printf("%.1lf\n", soma);

    return 0;
}