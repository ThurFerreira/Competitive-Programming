#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i, j, coluna1, coluna2, coluna3, somap;
    int mat[3][3];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> mat[i][j];
        }
    }

    for (j = 0; j < 3; j++)
    {   
        somap = 0;
        for (i = 0; i < 3; i++)
        {
            somap+=mat[i][j];
        }
        if(j == 0)
        coluna1 = somap;
        if(j == 1)
        coluna2 = somap;
        if(j == 2)
        coluna3 = somap;
    }

     cout << "Coluna 0: " << coluna1 << endl;
     cout << "Coluna 1: " << coluna2 << endl;
     cout << "Coluna 2: " << coluna3 << endl;
     
}