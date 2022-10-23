#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i, n, x = 0, h = 0, k;
    int vet[100000];

    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> vet[i];
    }

    for(i = 0; i+2 < n; i++)
    {
         if (vet[i] == 1 && vet[i + 1] == 0 && vet[i + 2] == 0)
            {
                h++;
            }

    }

    cout << h;
}
