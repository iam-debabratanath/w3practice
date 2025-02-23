#include<iostream>
using namespace std;
int  test(int x,int y)
{
    return(x>=10 && x<=20) || (y>=10 && y<= 20)?18:x+y;
}
int main()
{
    int a,b;
    cin>>a>>b;
   cout<<test(a,b)<<endl;
   return 0;
}