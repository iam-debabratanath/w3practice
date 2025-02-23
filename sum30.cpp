#include<iostream>
using namespace std;
bool test(int x,int y)
{
    return x==30||y==30||x+y==30;
}

int main()
{
    int x,y;
    cin>>x>>y;
    cout<<test(x,y)<<endl;

return 0;
}
