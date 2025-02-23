#include<iostream>
using namespace std;
bool test(string s)
{
    int ctr=0;
    for(int i=0; i < s.length()-1; i++)
    {
        if(s[i]=='a')
        ctr++;

        if(s.substr(i,2)=="aa"&&ctr<2)
        return true;
    }
    return false;
}

int main()
{
   
   
   string h;
   cin>>h;
   cout<<test(h)<<endl;    
   
   return 0;
}
