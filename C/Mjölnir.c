#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, forca, n;
    char nome[10];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%s %d", &nome, &forca);

        if (strcmp(nome, "Thor") == 0)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }

    return 0;
}