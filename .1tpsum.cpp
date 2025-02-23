#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y;
    z=x+y;
    if(x!=y)
    {
        cout<<z<<endl;
    }
    else if(x==y)
    {
        cout<<z*3<<endl;
    }
    return 0;
}