#include<iostream>
using namespace std;
int main()
{
    
    int n,i,j,ctr,r;
    cin>>n;
    for(i=0;i<10;i++)
    {
        ctr=0;
        for(j=n;j!=0;j=j/10)
        {
            r=j%10;
            if(r==1)
            {
                ctr++;
            }
        }
        cout<<ctr<<endl;
    }
    return 0;
}
