#include <stdio.h>
#include <stdlib.h>

int main() {
    int seg, min, hora, dias;
    int diai, horai, mini, segi;
    int diaf, horaf, minf, segf;

    scanf("Dia %d", &diai);
    scanf("%d : %d : %d\n", &horai, &mini, &segi);
    scanf("Dia %d", &diaf);
    scanf("%d : %d : %d", &horaf, &minf, &segf);

    seg = segf - segi;
    min = minf - mini;
    hora = horaf - horai;
    dias = diaf - diai;

    if(seg < 0){
        min--;
        seg = seg + 60;
    }if(min < 0){
        hora--;
        min = min + 60;
    }if(hora < 0){
        dias--;
        hora = hora + 24;
    }

    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", hora);
    printf("%d minuto(s)\n", min);
    printf("%d segundo(s)\n", seg);

return 0;
}