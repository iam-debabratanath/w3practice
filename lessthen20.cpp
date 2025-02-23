#include <iostream>
using namespace std;
bool test(int x,int y,int z)
{
    return x<20||y<20||z<20;
}
int main() 
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<test(a,b,c)<<endl;
    return 0;
}