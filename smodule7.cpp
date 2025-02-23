#include <iostream>
using namespace std;
int test(int x,int y)
{
     if(x==y)
    {
        return 0;
    }
    else if((x%7==y%7) && (x>y || x<y))
    {
       return x;
    }
    else 
    {
        return y;
    }
}
int main() 
{
    int a,b;
    cin>>a>>b;
    cout<<test(a,b)<<endl;
    return 0;
}
