#include <iostream>
using namespace std;

int main() {
    int dividend,divisor,quotient,remainder;
    cout<<"Input the dividend: ";
    cin>>dividend;
    cout<<"Input the divisor: ";
    cin>>divisor;

    quotient=dividend / divisor;
    remainder=dividend % divisor;

    cout<<"Quotient: "<<quotient<< endl;
    cout<< "Remainder: "<<remainder<< endl;
    return 0;
}
