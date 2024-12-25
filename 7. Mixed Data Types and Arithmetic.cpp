#include <iostream> 
#include <iomanip>  

using namespace std; 

int main() 
{
    int i1,i2;
    double d1,d2;
    cin>>i1>>i2;
    cin>>d1>>d2;

    cout <<" "<< i1 << " + " << d1 << " = " << i1+d1 << endl;  
    cout <<" "<< d1 << " + " << d1 << " = " << d1+d1 << endl;  
    cout <<" "<< i1 << " + " << d2 << " = " << i1+d2 << endl; 

    cout <<" "<< i1 << " - " << i2 << " = " << i1-i2 << endl; 
    cout <<" "<< d1 << " - " << d2 << " = " << d1-d2 << endl; 
    cout <<" "<< i1 << " - " << d2 << " = " << i1-d2 << endl;  
    

    cout <<" "<< i1 << " * " << i2 << " = " << i1*i2 << endl;  
    cout <<" "<< d1 << " * " << d2 << " = " << d1*d2 << endl;  
    cout <<" "<< i1 << " * " << d2 << " = " << i1*d2 << endl;  

    cout <<" "<< i1 << " / " << i2 << " = " << i1/i2 << endl;  
    cout <<" "<< d1 << " / " << d2 << " = " << d1/d2 << endl;  
    cout <<" "<< i1 << " / " << d2 << " = " << i1/d2 << endl;  

    cout << endl;
    return 0; 
} 
