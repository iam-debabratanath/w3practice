#include <iostream>
using namespace std;

int main()
{
    int dividend,divisor,quotient,remainder;
    cin>>dividend>>divisor;
    quotient=dividend/divisor;
    remainder=dividend%divisor;
    cout<<quotient<<endl<<remainder<<endl;
    return 0;
}
