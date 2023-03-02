#include <stdio.h>

int particiona(int *v, int in, int fim)
{
    int esq, dir, pivo, aux;
    esq = in;
    dir = fim;
    pivo = v[in];
    
    //enquanto os ponteiros nao se cruzarem
    while (esq < dir)
    {
        while (v[esq] <= pivo && esq <= fim){
            esq++;
        }
           
        while (v[dir] > pivo && dir >= in){
            dir--;
        }

        //condição se os ponteiros NÃO se cruzarem durante a pesquisa

        if (esq < dir)
        {
            aux = v[esq];
            v[esq] = v[dir];
            v[dir] = aux;
        }
    }
    
    //condição se eles se cruzarem, então significa que achou a posição correta do pivo
    v[in] = v[dir];
    v[dir] = pivo;
    
    //só retorna quando a esquerda e a direita se cruzam
    return dir;
}

void quickSort(int *v, int in, int fim)
{
    int pospivo;

    if (in < fim)
    {
        pospivo = particiona(v, in, fim);
        quickSort(v, in, pospivo - 1);  // lado esquerdo do pivô
        quickSort(v, pospivo + 1, fim); // lado direito do pivô
    }
}

int main()
{
    int vet[5] = {4, 2, 9, 8, 1};
    int n = sizeof(vet) / 4;

    quickSort(vet, 0,n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", vet[i]);
    }
}