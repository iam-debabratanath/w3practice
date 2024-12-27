#include <iostream>
using namespace std;
long long factorial(int num)
{
    return (num == 0) ? 1 : num * factorial(num - 1);
}
int main()
{
    int num;
    cin >> num; 
    cout << factorial(num) << endl;
    return 0;
}
