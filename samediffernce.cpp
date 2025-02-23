#include <iostream>
using namespace std;
bool test(int x,int y,int z)
{
    if(x>y && y>z && x>z)
    return x-y==y-z;
 
    if(x>y && z>y && x>z)
    return x-z==z-y;

    if(y>x && y>z && z>x)
    return y-x==x-z;

    if(y>x && y>z && z>x)
    return y-z==z-x;

    if(z>x && z>y && x>y)
    return z-x==x-y;

    return z-y==y-x;

}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<test(a,b,c)<<endl;
    return 0;
}