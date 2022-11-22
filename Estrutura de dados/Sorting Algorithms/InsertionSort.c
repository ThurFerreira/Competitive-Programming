#include <stdio.h>

void insertionSort(int *v, int n)
{
    int i, j, aux;
    for (i = 1; i < n; i++)
    {
        aux = v[i];
        j = i;
        while (j > 0 && v[j - 1] > aux)
        {
            v[j] = v[j - 1];
            j--;
        }
        v[j] = aux;
    }
}

int main(){
    int vet[5] = {4, 2, 9, 8, 1};
    int n = sizeof(vet)/4;

    insertionSort(vet, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", vet[i]);
    }

    return 0;
}