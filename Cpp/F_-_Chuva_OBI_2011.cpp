#include <bits/stdc++.h>

using namespace std;

int main(){
    int i, j, n, c=0;

    cin >> n;
    int mat1[101][101];
    int mat2[101][101];
    int sum[101][101];

    for(i = 1; i <= n;i++)
        for(j = 1; j <= n;j++){
            cin >> mat1[i][j];
        }

    for(i = 1; i <= n;i++)
        for(j = 1; j <= n;j++){
            cin >> mat2[i][j];
        }
    
    for(i = 1; i <= n;i++)
        for(j = 1; j <= n;j++){
           sum[i][j] = mat1[i][j] + mat2[i][j];
           
        }

    for(i = 1; i <= n;i++){
        for(j = 1; j <= n;j++){
            cout << sum[i][j] << " ";
        }
            cout << endl;
    }
            
}
