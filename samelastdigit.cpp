#include <iostream>
using namespace std;

bool test(int x,int y)
{ 
    return abs(x % 10) == abs(y % 10);
}


int main()
{
    int p,q;
    cin>>p;
    cin>>q;
    cout<<test(p,q)<<endl;
    return 0;
}
