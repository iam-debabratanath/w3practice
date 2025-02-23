#include <iostream>
using namespace std;
int test(int a,int b)
{
    return(a+b>=10&&a+b<=20)?30:(a+b);
}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<test(x,y)<<endl;
    return 0;
}