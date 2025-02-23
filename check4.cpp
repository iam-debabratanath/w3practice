#include <iostream>
using namespace std;
int test(int a,int b)
{
    return((a==5)|(b==5)||(a+b==5)||(a-b==5))?1:0;
}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<test(x,y)<<endl;
    return 0;
}