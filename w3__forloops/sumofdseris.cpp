#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    float x,sum,term,fct,y,j,m;
    int i,n;
    y=2;
    cin>>x;
    cin>>n;
    sum=1;
    term=1;
    cout<<term<<endl;
    for(i=1;i<n;i++)
    {
        fct=1;
        for(j=1;j<=y;j++)
        {
            fct=fct*j;
        }
        term=term*(-1);
        m=pow(x,y)/fct;
        m=m*term;
        cout<< i+1 <<" = "<< m<<endl;
        sum=sum+m;
        y+=2;
    }


    cout <<sum << endl;
    return 0;
}
