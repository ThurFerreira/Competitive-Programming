#include <stdlib.h>
#include <stdio.h>

int main()
{
   // int vet[10] = {4, 6, 2, 6, 8, 3, 2, 7, 9, 5};
    char vet[10] = {'K','W', 'G', 'D', 'H', 'R', 'B', 'N', 'I', 'Y'}, buffer;
    int tam = 10, aux, troca;

    do
    {
        troca = -1;
        for (int i = 0; i < tam - 1; i++)
        {

            if (vet[i] > vet[i + 1])
            {
                aux = vet[i];
                vet[i] = vet[i + 1];
                vet[i + 1] = aux;
                troca = i;
            }

        }
        tam--;
    } while (troca != -1);

    for (int i = 0; i < 10; i++)
    {
        printf("%c ", vet[i]);
    }
}