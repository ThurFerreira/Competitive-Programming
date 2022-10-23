#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i, d, tam;
    long long int n;
    char palavra[100];
    char palavraFinal[100];
    char digito[1];

    // leitura
    while (1)
    {
        scanf("%s %s", &digito, &palavra);
        
        n = atoll(palavra);
        d = atoi(digito);

        if (d == 0 && n == 0)
            break;

        //printf("%lld\n", n);
        //printf("%s\n", palavra);

        tam = strlen(palavra);

        for(i = 0; i < tam; i++)
        {
            if(palavra[i] == digito[0]){
                palavra[i] = ' ';
            }
        }
        printf("%s\n", palavra);
    }

    return 0;
}