#include <iostream>
#include <algorithm> // For sort function
using namespace std;
int main()
{
    int num[7];
    for (int i = 0; i < 7; ++i) cin >> num[i];
    sort(num, num + 7);
    for (int i = 6; i >= 0; --i) cout << num[i] << " ";
    return 0;
}
