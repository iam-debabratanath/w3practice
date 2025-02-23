#include<iostream>
using namespace std;
bool test(int x)
{
    return(x%10<=2 || x%10>=8);
}
int main()
{
    int y;
    cin>>y;
   cout<<test(y)<<endl;
   return 0;
}