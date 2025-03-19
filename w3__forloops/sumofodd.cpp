#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<2*i-1<<" ";
        sum+=2*i-1;
    }
    cout<<n<<"="<<sum<<endl;

    return 0;
}
