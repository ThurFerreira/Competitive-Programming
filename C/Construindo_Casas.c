/*
 - utilizando 100% do terreno
 8x10 = 80 metros quadrados
 mas como os terrenos são quadrados a casa pode ser no máximo 8x8 = 64 metros quadrados

 - utilizando 50% do terreno
 para construir a mesma casa de 64 metros quadrados utilizando 50% da area do terreno,
 o mesmo teria que ter 160 metros quadrados

 20% ----- 8x10 -        80 m² = 20%                            80 m² = 50%
 terreno 20x20 p         ? m²  = 100%                            ?    = 100%
                         (a*b*100) = 20 * ?
                     ***** (a*b)/c/100 = (?/2)

                         (a*b)/(c/100) = sqrt(T)
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
        float i, T, a, b, c;

        while (a != 0)
        {
                scanf("%f %f %f", &a, &b, &c);
                
                if(a == 0)
                        break;
                        
                else
                {
                        T = (int)sqrt(((a * b) / c) * 100.0);
                        printf("%.0f\n", T);
                }
        }

        return 0;
}