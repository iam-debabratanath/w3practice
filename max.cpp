#include<iostream>
using namespace std;

int test(int x,int y,int z)
{
    int r=max(x,max(y,z));
    return r;
}
int main()
{

    int a,b,c;
    cin>>a>>b>>c;
    cout<<test(a,b,c)<<endl;
    return 0;
}
