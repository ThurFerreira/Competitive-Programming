#include <bits/stdc++.h>

using namespace std;

int main(){
    int c, l, tip1, tip2;

    cin >> l;
    cin >> c;

    tip1 = (l * c) + ((l-1) * (c-1));
    tip2 = ((c-1) * 2) + ((l-1) * 2); 

    cout << tip1 << endl;
    cout << tip2 << endl;
}
