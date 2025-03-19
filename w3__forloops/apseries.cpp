#include <iostream>

using namespace std;

int main()
{
    int n1,df,n2,i,ln;
    int s1=0;
    cin>>n1;
    cin>>n2;
    cin>>df;
    s1=(n2*(2*n1+(n2-1)*df))/2;
    ln=n1+(n2-1)*df;
    for(i=n1;i<=ln;i=i+df)
    {
        if(i!=ln)
        cout<<i<<"+";
        else
        cout<<i<<"="<<s1<<endl;
    }
    return 0;
}