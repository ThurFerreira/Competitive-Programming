#include <bits/stdc++.h>

using namespace std;

int main(){
    int i, x, n, total, soma=0;

    cin >> x >> n;
    int usado[n];

    total = x * (n+1);

    for(i = 1; i <= n; i++){
        cin >> usado[i];
        soma += usado[i];
    }

    cout << total - soma << endl;
    
}
