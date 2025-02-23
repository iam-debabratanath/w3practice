#include<iostream>
using namespace std;
bool test(int x)
{
    if(x%3==0||x%7==0)
    {
        return true;
    } 
    else
    {
        return false;
    }
   
}

int main()
{
    int n;
    cin>>n;
    cout<<test(n)<<endl;
    return 0;
}
