#include <iostream>

using namespace std;

int main()
{
    int i, a=0, b, x = 0, h = 0, k = 0, I1, I2;

    //I1 = True -> A = True
    //I2 = troca os resultados de A e B

    cin >> x;

    for (i = 0; i < x; i++)
    {
        cin >> h;

        if (h == 1)
        { //interruptor 1 apertado, I1 inverte
            a++;
        }
        if (h == 2)
        { //interruptor 2 apertado, I1 e I2 invertem
            a++;
            b++;
        }

      
    }

    if (a % 2 == 0)
    {
        a = 0;
    }
    else
    {
        a = 1;
    }

    if (b % 2 == 0)
    {
        b = 0;
    }
    else
    {
        b = 1;
    }

    cout << a << endl;
    cout << b << endl;
}
