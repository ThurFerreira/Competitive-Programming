#include <stdio.h>
#include <stdlib.h>

void merge(int *v, int in, int meio, int fim)
{
    int *aux, p1, p2, tam, i, j, k, f1, f2;
    f1 = f2 = 0;
    tam = (fim - in) + 1;
    p1 = in;
    p2 = meio + 1;
    aux = (int *)malloc(tam * sizeof(int));

    if (aux != NULL)
    {
        for (i = 0; i < tam; i++)
        {
            if (f1 == 0 && f2 == 0) // nenhum dos subvetores acabou
            {
                if (v[p1] < v[p2])
                {
                    aux[i] = v[p1];
                    p1++;
                }
                else
                {
                    aux[i] = v[p2];
                    p2++;
                }
                if (p1 > meio)
                    f1 = 1; // vetor acabou?
                if (p2 > fim)
                    f2 = 1;
            }
            else // qual subvetor acabou?
            {
                if (f1 == 1)
                {
                    aux[i] = v[p2];
                    p2++;
                }
                else
                {
                    aux[i] = v[p1];
                    p1++;
                }
            }
        } // fim for
        for (j = 0, k = in; j < tam; j++, k++)
             v[k] = aux[j];
    }
    free(aux);
}

void mergeSort(int *v, int in, int fim)
{
    int meio;
    if (in < fim)
    {
        meio = (in + fim) / 2;
        mergeSort(v, in, meio);      // metade da esquerda
        mergeSort(v, meio + 1, fim); // metade da direita
        // intercala as duas metades ordenadas
        merge(v, in, meio, fim);
    }
}

int main()
{
    int vet[5] = {4, 2, 9, 8, 1};
    int n = sizeof(vet) / 4;

    mergeSort(vet, 0,n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", vet[i]);
    }
}