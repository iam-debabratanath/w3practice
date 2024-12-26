#include <iostream>
#include <cmath>
using namespace std;    
int main() 
{
    int radius, height, volume;
    cin>>radius>>height;
    volume=3.14*radius*radius*height;
    cout << "The volume of the cylinder is: " << volume <<endl;
    return 0;
}