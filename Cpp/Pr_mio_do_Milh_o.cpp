#include <iostream>

using namespace std;

int main() {
        int i, a, x=0, h=0,k=0;

        cin >> a;

        while (h < 1000000){
            cin >> x;
            h+=x;
            k++;
        }

        cout << k;
}
