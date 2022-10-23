#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, n, k;
    char r1[10], r2[10];
       //sheldon  //raj

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
         scanf("%s %s", r1, r2);

        if(!(strcmp(r1, r2)))
            printf("Caso #%d: De novo!\n", i);

        else if(!(strcmp(r1, "tesoura")) && !(strcmp(r2, "papel"))) printf("Caso #%d: Bazinga!\n", i);
        else if(!(strcmp(r1, "papel")) && !(strcmp(r2, "pedra"))) printf("Caso #%d: Bazinga!\n", i);
        else if(!(strcmp(r1, "pedra")) && !(strcmp(r2, "lagarto"))) printf("Caso #%d: Bazinga!\n", i);
        else if(!(strcmp(r1, "lagarto")) && !(strcmp(r2, "Spock"))) printf("Caso #%d: Bazinga!\n", i);
        else if(!(strcmp(r1, "Spock")) && !(strcmp(r2, "tesoura"))) printf("Caso #%d: Bazinga!\n", i);
        else if(!(strcmp(r1, "tesoura")) && !(strcmp(r2, "lagarto"))) printf("Caso #%d: Bazinga!\n", i);
        else if(!(strcmp(r1, "lagarto")) && !(strcmp(r2, "papel"))) printf("Caso #%d: Bazinga!\n", i);
        else if(!(strcmp(r1, "papel")) && !(strcmp(r2, "Spock"))) printf("Caso #%d: Bazinga!\n", i);
        else if(!(strcmp(r1, "Spock")) && !(strcmp(r2, "pedra"))) printf("Caso #%d: Bazinga!\n", i);
        else if(!(strcmp(r1, "pedra")) && !(strcmp(r2, "tesoura"))) printf("Caso #%d: Bazinga!\n", i);
        else printf("Caso #%d: Raj trapaceou!\n", i);
    }
    return 0;
}