#include<iostream>
using namespace std;
int main()
{
    int i,j,sum=0;
    cin>>i;
    cin>>j;
    for(i=i;i<j;i++)
    {
        if(i%9==0)
        {
            cout<<" "<<i;
            sum+=i;
        }
    }
    cout<<sum<<endl;
    return 0;
}
