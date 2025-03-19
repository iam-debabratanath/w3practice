#include<iostream>
using namespace std;
int main()
{
    int i,n;
    float s=0.0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i<n)
        {
            cout<<"1/"<<i<<" + ";
            s+=1/(float)i;
        }
        if(i==n)
        {
            cout<<"1/"<<i;
            s+=1/(float)i;
        }
    }
    cout<<s<<endl;
    return 0;
}
