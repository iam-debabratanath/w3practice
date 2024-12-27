#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, first, last, digits;
    cin>>n;
    digit =log10(n);
    firs=n/pow(10,digits);
    last=n%10;
    n=(last*pow(10,digits))+(n%(int)pow(10,digits)/10*10)+first;
    cout<<n<<endl;
    return 0;
}
