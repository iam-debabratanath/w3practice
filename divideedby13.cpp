#include<iostream>
using namespace std;
int test(int n)
{
    return(n%13==0||n%13==1);
}
int main()
{
    int y;
    cin>>y;
    cout<<test(y)<<endl;
   return 0;
}
