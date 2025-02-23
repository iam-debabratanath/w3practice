#include<iostream>
using namespace std;
bool test(int x,int y)
{
    return (x/10 == y/10 || x%10==y%10 || x/10==y%10 || x%10==y/10);
}

int main()
{
    int a,b;
    cin>>a>>b;
   cout<<test(a,b)<<endl;
   return 0;
}
