#include<iostream>
using namespace std;
int test(int x,int y,int z)
{
    if(x==13)
    {
        return 0;
    }
    else if (y==13)
    {
        return x;
    }
    else if(z==13)
    {
        return x+y;
    }
    else
    { 
        return x+y+z;
    }
}
int main()
{
    // int a,b,c;
    // cin>>a>>b>>c;
//    cout<<test(a,b,c)<<endl;
   cout << test(4, 5, 7) << endl;    
    cout << test(7, 4, 12) << endl;  
    cout << test(10, 13, 12) << endl; 
     cout << test(13, 12, 18) << endl; 
   return 0;
}
