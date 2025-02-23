#include<iostream>
using namespace std;
int test(int x,int y)
{
    return to_string(x+y).length()>to_string(x).length()?x:x+y;
}
int main()
{
   int a,b;
   cin>>a>>b;
   cout<<test(a,b)<<endl;
   return 0;
}
