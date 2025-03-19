#include <iostream>
using namespace std;
int main()
{

   int i,ctr,cub;
   cin>>ctr;
   for(i=1;i<=ctr;i++)
   {
    cub = i * i * i; 
    cout << i << " = " << cub << endl; 
   }
    return 0;
}
