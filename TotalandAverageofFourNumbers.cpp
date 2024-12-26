#include <iostream>
using namespace std;

int main() {
    float num1, num2, num3, num4, total, average;
    cin >> num1 >> num2 >> num3 >> num4;
    total = num1 + num2 + num3 + num4;
    average = total / 4;
    cout << total << endl << average << endl;
    return 0;
}
