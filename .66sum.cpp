#include <iostream>
using namespace std;

int sum_to_n(int n) 
{
    int total = 0;
    for (int x = 1; x <= n; x++) total += x;
    return total;
}

int main() {
    cout << "Add 1 to 4: " << sum_to_n(4) << "\n";
    cout << "Add 1 to 100: " << sum_to_n(100) << "\n";
    return 0;
}
