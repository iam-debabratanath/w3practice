#include<iostream>
using namespace std;
int main()
{
    int a,b,c,s;
    cin>>a>>b>>c;
    s= max(c,max(a,b));
    cout<<s<<endl;
   return 0;
}
