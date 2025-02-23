#include<iostream>
using namespace std;
bool test(int x)
{
    return(x%3==0 ^ x%7==0);
}
int main()
{
    int y;
    cin>>y;
   cout<<test(y)<<endl;
   return 0;
}
