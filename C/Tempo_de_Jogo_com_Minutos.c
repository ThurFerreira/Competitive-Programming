#include <stdio.h>
#include <stdlib.h>

int main() {
        int hor_ini, min_ini, hor_fin, min_fin, horas, hor_min, min, h_1;

        scanf("%d %d %d %d", &hor_ini, &min_ini, &hor_fin, &min_fin);

        horas = hor_fin - hor_ini;
        min = min_fin - min_ini;

        if(min < 0){
            horas = hor_fin - hor_ini;
            horas--;
            min = min + 60;
        }if(horas < 0){
            horas = horas + 24;
        }if(hor_ini == min_ini && hor_fin == min_fin){
            printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        }else{
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, min);
        }

return 0;
}