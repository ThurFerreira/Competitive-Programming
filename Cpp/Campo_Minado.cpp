#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, i, x;

    cin >> n;
    int vet[n];

    for (i = 0; i < n; i++)
    {
        cin >> vet[i];
    }


    for (i = 0; i < n; i++){
        int qtd = 0;
        qtd+=vet[i];
        if (i < n-1)
        qtd+=vet[i+1];
        if (i > 0)
        qtd+=vet[i-1];
        cout << qtd << endl;
      
    }
        
}
