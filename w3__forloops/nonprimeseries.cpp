#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int ult;
    cin>>ult;
    for(int num=2;num<=ult;++num)
    {
        int mfactor=(int)sqrt(num);
        for(int fact=2;fact<=mfactor;++fact)
        {
            if(num%fact==0)
            {
                cout<<num<<" ";
                break;
            }
        }
    }

    cout  << endl;
    return 0;
}
