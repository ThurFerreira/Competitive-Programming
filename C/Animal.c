#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char animal1[21], animal2[21], animal3[21];

    scanf("%s %s %s", animal1, animal2, animal3);

    if (!strcmp(animal1, "vertebrado") && !strcmp(animal2, "ave") && !strcmp(animal3, "carnivoro"))
    {
        printf("aguia\n");
    }
    if (!strcmp(animal1, "vertebrado") && !strcmp(animal2, "ave") && !strcmp(animal3, "onivoro"))
    {
        printf("pomba\n");
    }
    if (!strcmp(animal1, "vertebrado") && !strcmp(animal2, "mamifero") && !strcmp(animal3, "onivoro"))
    {
        printf("homem\n");
    }
    if (!strcmp(animal1, "vertebrado") && !strcmp(animal2, "mamifero") && !strcmp(animal3, "herbivoro"))
    {
        printf("vaca\n");
    }
    if (!strcmp(animal1, "invertebrado") && !strcmp(animal2, "inseto") && !strcmp(animal3, "hematofago"))
    {
        printf("pulga\n");
    }
    if (!strcmp(animal1, "invertebrado") && !strcmp(animal2, "inseto") && !strcmp(animal3, "herbivoro"))
    {
        printf("lagarta\n");
    }
    if (!strcmp(animal1, "invertebrado") && !strcmp(animal2, "anelideo") && !strcmp(animal3, "hematofago"))
    {
        printf("sanguessuga\n");
    }
    if (!strcmp(animal1, "invertebrado") && !strcmp(animal2, "anelideo") && !strcmp(animal3, "onivoro"))
    {
        printf("minhoca\n");
    }

    return 0;
}