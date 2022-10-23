#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void bask(float x, float y, float z)
{
    float delta, R1, R2;
    delta = pow(y, 2) - 4 * x * z;
    R1 = (-y + sqrt(delta)) / (2 * x);
    R2 = (-y - sqrt(delta)) / (2 * x);

    if (delta < 0 || x == 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        printf("R1 = %.5f\n", R1);
        printf("R2 = %.5f\n", R2);
    }
}

int main()
{
    float a, b, c;

    scanf("%f %f %f", &a, &b, &c);

    bask(a, b, c);

    return 0;
}