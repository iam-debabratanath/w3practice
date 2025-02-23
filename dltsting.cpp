#include <iostream>
using namespace std;
string test(string str1, string c) 
{
    for(int i=str1.length()-2;i>0;i--)
    {
        if(str1[i]==c[0])
        {
            str1=str1.erase(i,1);
        }
    }
    return str1;
}
int main() 
{
    string x;
    cin>>x;
    
    string y;
    cin>>y;

    cout<<test(x,y)<<endl;

    return 0;
}