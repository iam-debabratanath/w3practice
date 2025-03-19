#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float x,sum,ctr;
    int i,n,m,mm,nn=0;
    cin>>x;
    cin>>n;
    sum=x;
    m=-1;
    cout<<sum<<endl;
    for(i=1;i<n;i++)
    {
        ctr=(2*i+1);
        mm=pow(x,ctr);
        nn=mm*m;
        cout<<nn<<endl;
        sum=sum+nn;
        m=m*(-1);
    }
    cout<<sum<<endl;
    return 0;
}
