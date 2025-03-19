#include<iostream>
using namespace std;
int main()
{
    float x,sum,no_row;
    int i,n;
    cin>>x;
    cin>>n;
    sum=1;
    no_row=1;
    for(i=1;i<n;i++)
    {
        no_row=no_row*x/(float)i;
        sum=sum+no_row;
    }
    cout<<sum<<endl;
    return 0;
}
