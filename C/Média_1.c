#include <stdio.h>
#include <stdlib.h>

float med(float x, float y){
    float media;
    media = (x*3.5 + y*7.5) / 11;

    return media;
}
int main() {
    float a, b, media;

    scanf("%f %f", &a, &b);

    media = med(a,b);

    printf("MEDIA = %.5f\n", media);
    // printf("MEDIA = %.5f", med(a, b));
return 0;
}