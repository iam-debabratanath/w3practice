#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double d, la1, la2, lo1, lo2, r = 0.01745327, er = 6371.01;
    cin>>la1>>lo1>>la2>>lo2;
    la1 *= r, la2 *= r, lo1 *= r, lo2 *= r;
    d=er *acos(sin(la1)*sin(la2)+cos(la1)*cos(la2)*cos(lo1 - lo2));
    cout << d << endl;
    return 0;
}
