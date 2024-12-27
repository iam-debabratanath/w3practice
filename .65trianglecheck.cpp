#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    vector<int> sides(3);
    cin >> sides[0] >> sides[1] >> sides[2];
    sort(sides.begin(), sides.end());
    cout << (sides[0] * sides[0] + sides[1] * sides[1] == sides[2] * sides[2] ? "Yes" : "No") << endl;
    return 0;
}
