#include<iostream>
using namespace std;
int main() {

    float p, r, t, i;
    cin>p>>r>>t;
     i=(p * r * t)/100;
    cout << " The Simple interest for the amount " << p << " for " << t << " years @ " << r << " % is: " << i;
    cout << endl;
    return 0;
}
