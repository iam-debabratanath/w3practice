#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    
    int s= max(c,max(a,b));
    if((s*s)==((a*a)+(b*b)))
    {
        cout<<"RIGHT TRIANGLE"<<endl;
    }
    else
    {
        cout<<"NOT RIGHT TRIANGLE"<<endl;
    }
   return 0;
}
