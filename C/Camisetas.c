#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct Camisetas{

    char tam;
    char name[100];
    char cor[10];

};

int ordena (const void * p1, const void * p2) {
    struct Camisetas *i = (struct Camisetas*)p1, *j = (struct Camisetas*)p2;
    int r = strcmp(i->cor, j->cor);
    int a = strcmp(i->name, j->name);

    if (r == 0){
        if(i->tam > j->tam)
            return -1;
        else if (i->tam < j->tam)
            return 1;
    else
        return a;
    }    
    else
        return r;
}

int main()
{
    int i, n, ini=0;
    char nome[30];
    struct Camisetas camisa[60];

    while (scanf("%d\n", &n) && n != 0){
        
        for (i = 0; i < n; i++)
        {
            gets(camisa[i].name);
            scanf("%s %c ", camisa[i].cor, &camisa[i].tam);
            
        }
			
        qsort(camisa, n, sizeof(struct Camisetas), ordena);
        
        if (ini > 0)
            printf("\n");
        else 
            ini++;

        for (i = 0; i < n; i++)
            printf("%s %c %s\n", camisa[i].cor, camisa[i].tam, camisa[i].name);
    }

    return 0;
}