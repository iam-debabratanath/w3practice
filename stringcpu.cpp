#include<iostream>
using namespace std;
string test(string s,int n)
{
   string r;
   
    int fos=3;
    if(fos>s.length())
    fos=s.length();

    string f=s.substr(0,fos);
    for(int i=0;i<n;i++)
    {
        r += f;
    }
    return r;
}



int main()
{
    string r;
    int g;
    cin>>r;
    cin>>g;
    cout<<test(r,g)<<endl;
    
    return 0;
}
