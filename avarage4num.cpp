#include <iostream>
using namespace std;

int main()
{
    int num1,num2,num3,num4;
    cin>>num1>>num2>>num3>>num4;
    int total = num1 + num2 + num3 + num4;
    imt average = total / 4;
    cout << "Total: " << total << "\nAverage: " << average << endl;
    return 0;
}
