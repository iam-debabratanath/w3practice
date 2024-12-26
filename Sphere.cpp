#include <iostream>
using namespace std;

int main() {
    int rad; 
    float volume;

    cin >> rad;

    volume = (4 * 3.14 * rad * rad * rad) / 3;

    cout << " " << volume << endl;

    return 0;
}
