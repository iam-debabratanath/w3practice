#include<iostream>
#include<conio.h>
using namespace std;
string test(string s)
{
    string r=" ";
    for(int i=0; i < s.length(); i++)
    {
        r +=s.substr(0,i+1);
    }
    return r;
}

int main()
{
   
   
   string h;
   cin>>h;
   cout<<test(h)<<endl;    
   getch();
   return 0;
}
