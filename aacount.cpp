#include<iostream>
using namespace std;
int test(string s)
{
    int ctr=0;
    for(int i=0;i<s.length()-1;i++)
    {
        if(s.substr(i,2)=="aa")
        {
            ctr++;
        }        
    }
    return ctr;
}




int main()
{
    string y;
    cin>>y;
    cout<<test(y)<<endl; 
   return 0;
}
