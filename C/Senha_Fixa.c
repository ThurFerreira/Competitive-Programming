#include <stdio.h>
#include <stdlib.h>

int main() {
        int i,pass=0, senha = 0;

        while(1){
            scanf("%d",&pass);

            if(pass == 2002){
                printf("Acesso Permitido\n");
                break;
            }else{
                printf("Senha Invalida\n");
            }
        }
return 0;
}