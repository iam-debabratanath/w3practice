#include<iostream>
#include<math.h>

using namespace std;

int main() {

    float p,r,t,cp,ci;
    cin>>p>>r>>t;
    ci = p * pow((1 + r / 100), t) - p;
    cp = p * pow((1 + r / 100), t);
    cout<< "Interest  " << p << " for " << t << " years @ " << r << " % is: " << ci;
    cout<< endl;
    cout<<" Total amount  " << p << " for " << t << " years @ " << r << " % is: " << cp;
    cout<<endl;
     return 0;
}
