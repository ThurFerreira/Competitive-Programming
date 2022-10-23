#include <stdio.h>
#include <stdlib.h>

int main() {
        //life is not a problem to be solved
        int i, x;
        int vet[35] = {'L', 'I', 'F', 'E', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'A', ' ', 'P', 'R', 'O', 'B', 'L', 'E', 'M', ' ', 'T', 'O', ' ', 'B', 'E', ' ', 'S', 'O', 'L', 'V', 'E', 'D'};

        scanf("%d", &x);

        for(i = 0;i < x; i++){
            printf("%c", vet[i]);
        }
        printf("\n");
return 0;
}