#include<iostream>
using namespace std;
int main()
{
    int num1,num2,r,pro=1,i;
    cin>>num1;
    num2=num1;
    while(num2 > 0)
    {
        r = num2 % 10;
        pro = pro * r;
        num2 = num2 / 10;
    }
    cout<<pro<<endl;
    return 0;
}
