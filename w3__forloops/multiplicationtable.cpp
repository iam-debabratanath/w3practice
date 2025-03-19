#include <iostream>
using namespace std;
int main()
{
    int j,i,n;
    cin>>n;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=n-1)
            {
                cout << j << "x" << i << "=  " << i * j;
            }
            else
            {
                cout << j << "x" << i << "=  " << i * j;
            }
            cout<<" ";
        }
    }
    return 0;
}
