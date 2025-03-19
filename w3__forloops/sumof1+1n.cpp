#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    int t=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum+=t;
        t=(t*10)+1;
    }
    cout<<sum<<endl;
}