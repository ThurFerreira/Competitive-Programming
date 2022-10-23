#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int i, n, k, j, inicial;
    int tam;
    char entry[1000];

    scanf("%d", &n);

    // leitura
    for (k = 0; k < n; k++)
    {
        scanf(" %[^\n]", entry);
        tam = strlen(entry);

        for (i = 0; i < tam; i++)
        {
            if (entry[i] >= 97 && entry[i] <= 122 || entry[i] >= 65 && entry[i] <= 90)
            {
                entry[i] += 3;
            }
        }

        for (i = 0; i < tam / 2; i++)
        {
            inicial = entry[i];
            entry[i] = entry[tam - i - 1];
            entry[tam - i - 1] = inicial;
        }

        for (i = 0; i < tam; i++)
        {
            if (i >= tam / 2)
            {
                entry[i] -= 1;
            }
        }
        
        printf("%s\n", entry);
        
    }
    return 0;
}