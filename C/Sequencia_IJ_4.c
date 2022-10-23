#include <stdio.h>
#include <stdlib.h>
int main()
{

    float i, j = 1, k, a, inicial, I;
    int aux;

    for (i = 0; i <= 2.2; i += 0.2)
    {
        inicial = j;
        I = i;

        for (k = 0; k < 3; k++)
        {
            if (I == (int)I || I >= 2)
            {
                printf("I=%.0f J=%.0f\n", I, j++);
            }
            else
            {
                printf("I=%.1f J=%.1f\n", I, j++);
            }
        }

        j = inicial + 0.2;
    }

    return 0;
}