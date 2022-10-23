#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int i;
    double x,n;

    cin >> x;

    cout.precision(4);
    cout.setf(ios::fixed);

    for(i=0; i < x; i++){
        cin >> n;

        cout << sqrt(n) << endl;
    }
}
