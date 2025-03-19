#include<iostream>
using namespace std;
int main()
{
    int i,n1,n2,j,hcf=1,lcm;
    cin>>n1;
    cin>>n2;
    j=(n1<n2)?n1:n2;
    for(i=1;i<=j;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            hcf=i;
        }
    }
    lcm=(n1*n2)/hcf;
    cout<<lcm<<endl;
    return 0;
}
