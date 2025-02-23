#include <iostream>
using namespace std;
bool test(int x,int y,int z)
{
    return x%10==y%10||y%10==z%10||x%10==z%10;
}
int main() 
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<test(a,b,c)<<endl;
    return 0;
}