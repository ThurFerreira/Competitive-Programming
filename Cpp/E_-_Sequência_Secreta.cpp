#include <bits/stdc++.h>

using namespace std;

int main(){
    int i, n, c=0;

    cin >> n;
    int vet[n];

    for(i = 0; i < n ;i++){
        cin >> vet[i];
    }
    for(i = 0; i < n ;i++){
        if (vet[i] != vet[i+1])
         c++;
    }
    cout << c << endl;

}
