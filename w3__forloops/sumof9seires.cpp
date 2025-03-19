#include <iostream>
using namespace std;
int main()
{
    long int n,i,t=9;
    int sum=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum+=t;
        cout<<t<<" ";
        t=t*10+9;
    }
    cout<<sum<<endl;
    return 0;
}
