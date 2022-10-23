#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i, j, n, soma=0;
    int mat[3][3];

    for (i = 0; i < 3; i++)
    {
        soma = 0;
        for (j = 0; j < 3; j++){
            cin >> mat[i][j];

            soma+=mat[i][j];
        }
        printf("Linha %d: %d\n", i, soma);          
    }    
}