#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, popA, popB, x, T = 0;
    float txA = 0, txB = 0;

    scanf("%d", &x);

    for (i = 0; i < x; i++)
    {
        scanf("%d %d %f %f", &popA, &popB, &txA, &txB);

        while (popA <= popB)
        {
            popA += (int)(popA * (txA / 100));
            popB += (int)(popB * (txB / 100));
            T++;
            if (T > 100)            
                break;
            
        }

        if (T > 100)
            printf("Mais de 1 seculo.\n");
        else
            printf("%d anos.\n", T);
        

        T = 0;
    }
    return 0;
}