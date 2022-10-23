#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i, n;
    long long int num1, num2, sum;
    char nome1[100], nome2[100];
    char escolha1[5], escolha2[5];
    
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        
        scanf("%s %s %s %s", nome1, escolha1, nome2, escolha2);
        scanf("%lld %lld", &num1, &num2);

        sum = num1 + num2;

        if(escolha1 == "IMPAR"){
            if(sum % 2 != 0)
                printf("%s\n",nome1);
            else
                printf("%s\n",nome2);
        }else {
            if(sum % 2 == 0)
                printf("%s\n",nome1);
            else
                printf("%s\n",nome2);
        }
    }
return 0;
}