#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i, n, j, contador = 0;
    int mat1[101][101], mat2[101][101], mat3[101][101];

    cin >> n;

    for (i = 0; i < n; i++)
    {   
        for (j = 0; j < n; j++)
            cin >> mat1[i][j];              
    }

    for (i = 0; i < n; i++){
        for(j = 0; j < n; j++)
            cin >> mat2[i][j];
    }

     for (i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            mat3[i][j] = mat2[i][j] + mat1[i][j];
            cout << mat3[i][j] << " ";
        }
            cout << endl;          
    }
            

}
