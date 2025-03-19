#include<iostream>
using namespace std;
int main()
{
    int i,j,spc,k,t=1,rows;
    cin>>rows;
    spc=rows+4-1;
    for(i=1;i<=rows;i++)
    {
        for(k=spc;k>=1;k--)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<t++<<" ";
        }
        cout<<endl;
        spc--;
    }
    return 0;
}
