#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //%[^\]s
    int i, cawcaw = 0, num = 0;
    char n[10];

     while (cawcaw < 3)
     {
        gets(n);

        if (!(strcmp(n, "--*"))) 
        {
            num += 1;
        }
        if (!(strcmp(n, "*--")))
        {
            num += 4;
        }
        if (!(strcmp(n, "-*-")))
        {
            num += 2;
        }
        if (!(strcmp(n, "***")))
        {
            num += 7;
        }
        if (!(strcmp(n, "*-*")))
        {
            num += 5;
        }
        if (!(strcmp(n, "**-")))
        {
            num += 6;
        }
        if (!(strcmp(n, "-**")))
        {
            num += 3;
        }
        if (!(strcmp(n, "---")))
        {
            num += 0;
        }

        if (!(strcmp(n, "caw caw")))
        {
            printf("%d\n", num);
            cawcaw++;
            num = 0;
        }
    }

    return 0;
}