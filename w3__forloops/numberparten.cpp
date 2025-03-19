#include<iostream>
using namespace std;
int main()
{
    int i,j,rows,k=1;
    cin>>rows;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<k++<<" ";
        }
        cout<<endl;
    }
    return 0;
}
