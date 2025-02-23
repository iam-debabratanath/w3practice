#include<iostream>
using namespace std;

bool test(int x,int y)
{
    return(20>=x<=50||20>=y<=50);
    
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<test(a,b)<<endl;
    return 0;
}
