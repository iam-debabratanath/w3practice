#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float ar, s, n;
    cin>>n>>s;
    ar=(n*(s*s))/(4*tan(M_PI/n));
    cout<<ar<<endl;
    return 0;
}
