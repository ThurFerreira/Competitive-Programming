#include <iostream>

using namespace std;

int main() {

    int l,c,n,i;
    int k = 0;

    cin >> n;
    for(i = 1; i <= n; i++){
        cin >> l >> c;
        if(c < l)
            k = k + c;
    }
        cout << k << endl;
}
