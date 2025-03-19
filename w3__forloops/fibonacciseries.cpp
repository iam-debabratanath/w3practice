#include<iostream>
using namespace std;
int main()
{
    int prv=0,pre=1,trm,i,n;
    cin>>n;
    cout<<prv<<" "<<pre;
    for(i=0;i<=6;i++)
    {
       trm=prv+pre;
       cout<<" "<<trm;
       prv=pre;
       pre=trm;
    }
    cout<<endl;
    return 0;
}
