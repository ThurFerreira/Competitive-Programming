#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n;
    int mat[70][70];

    while (scanf("%d", &n) != EOF)
    {

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {               

                if (i + j == n-1) mat[i][j] = 2;

                else if(i == j) mat[i][j] = 1;   

                else mat[i][j] = 3;

                printf("%d", mat[i][j]);
            }
             printf("\n");
        }
    }

    return 0;
}