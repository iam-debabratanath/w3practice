#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x;
    y=51-x;
    z=x-51;
    if(x<51)
    {
        cout<<y<<endl;
    }
    else if(x>51)
    {
        cout<<3*z<<endl;
    }

    return 0;
}
