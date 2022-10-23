#include <bits/stdc++.h>

using namespace std;

int main(){
    int x;

    cin >> x;
    if (x <= 800){
        cout << 1 << endl;
    }else if(x <= 1400 && x > 800){
        cout << 2 << endl;
    }else if (x > 1400 && x <= 2000){
        cout << 3 << endl;
    }
       
}
