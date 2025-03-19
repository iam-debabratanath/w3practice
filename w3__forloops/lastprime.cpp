#include <iostream>
using namespace std;
int main()
{
    int n, ctr = 0;
    cin >> n;
    for (int i = n - 1; i >= 2; i--)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
                ctr++;
        }
        if (ctr == 0)
        {
            if (i == 1)
            {
                cout << "less then 2" << endl;
                break;
            }
            cout << i << " is the last prime less than " << n << endl;
            break;
        }
        ctr = 0;
    }
    return 0;
}
