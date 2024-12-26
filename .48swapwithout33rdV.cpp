#include <iostream> 
using namespace std;
int main() 
{
    int num1, num2;
    cin >> num1;
    cin >> num2;
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout << "After swapping, 1st number: " << num1 << "\n";
    cout << "After swapping, 2nd number: " << num2 << "\n";
    return 0;
}
