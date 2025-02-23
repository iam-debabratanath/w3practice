#include<iostream>
using namespace std;
bool test(int x,int y,int z,bool flag)
{
    return flag? x<=y && y<=z :x<y && y<z;
}

int main()
{
    cout<<test(1,2,3,false)<<endl;
   return 0;
}
