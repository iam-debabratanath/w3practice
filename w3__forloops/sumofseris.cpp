#include <iostream>

using namespace std;

int main() 
{
    int tsum,i,j,n,sum=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        tsum=0;
        for(j=1;j<=i;j++)
        {
            sum+=j;
            tsum+=j;
            cout<<j;
            if(j<i)
            {
                cout<<"+";
            }
        }
        cout<<" = "<<tsum<<endl;
    }
    cout<<sum<<endl;
    return 0;
}