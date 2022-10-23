#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 500

typedef struct
{
    int ouro, prata, bronze;
    char pais[20];

} Quadro_De_Medalhas;

int compare(const void *p1, const void *p2)
{
    Quadro_De_Medalhas *i = (Quadro_De_Medalhas *)p1, *j = (Quadro_De_Medalhas *)p2;

    if (i->ouro > j->ouro)
        return -1;

    else if (i->ouro < j->ouro)
        return 1;

    else if (i->prata > j->prata)
        return -1;

    else if (i->prata < j->prata)
        return 1;

    else if (i->bronze > j->bronze)
        return -1;

    else if(i->bronze < j->bronze)
        return 1;
    else
        return strcmp(i->pais, j->pais);
}
int main()
{

    int i, n;
    Quadro_De_Medalhas medalhas[MAX];

    scanf("%d", &n); 
    for (i = 0; i < n; i++)
    {
        scanf("%s %d %d %d", medalhas[i].pais, &medalhas[i].ouro, &medalhas[i].prata, &medalhas[i].bronze);
    }

    qsort(medalhas, n, sizeof(Quadro_De_Medalhas), compare);

    for (i = 0; i < n; i++)
    {
        printf("%s %d %d %d\n", medalhas[i].pais, medalhas[i].ouro, medalhas[i].prata, medalhas[i].bronze);
    }

    return 0;
}