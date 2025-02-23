#include<iostream>
using namespace std;
bool test(string c)
{
    if(c.length()<3&&c=="C#")
    {
        return true;
    }
    if(c.substr(0,2)=="C#"&&c[2]==' ')
    {
        return true;
    }
    return false;
}



int main()
{
    string x;
    cin>>x;
    cout<<test(x)<<endl;
    return 0;
}
