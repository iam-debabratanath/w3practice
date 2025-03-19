#include<iostream>
#include<math.h>

using namespace std;
int main()
{
    int n,i;
    double sum=0,a;
    cin>>n;
    for(i=0;i<=n;++i)
    {
        a =1/pow(i,i);
        cout <<"1/ "<< i << "^" << i << " = " << a << endl;
        sum+=a;
    }
    cout<<sum<<endl;
    return 0;
}
