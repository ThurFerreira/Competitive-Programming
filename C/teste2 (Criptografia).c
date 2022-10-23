#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i, inicial;
    char entry[100] = "arthur";
    int tam = strlen(entry);

    for(i = 0; i < tam; i++){
        entry[i]+=3;
    }

    // for(i = 0; i < tam/2; i++){
    //     inicial = entry[i];
    //     entry[i] = entry[tam-i-1];
    //     entry[tam-i-1] = inicial;
    // }

    // for(i = 0; i < tam; i++){
    //     if (i >= tam/2){
    //         entry[i]-=1;
    //     }
    // }

    printf("%s", entry);
return 0;
}