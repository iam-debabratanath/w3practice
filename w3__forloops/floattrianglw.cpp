#include<iostream>
using namespace std;
int main()
{
    int i, j, n, p, q;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            p = 1;
            q = 0;
        }
        else
        {
            p = 0;
            q = 1;
        }
        for (j = 1; j <= i; j++)
        {
            if (j % 2 == 0)
            {
                cout << p;
            }
            else
            {
                cout << q;
            }
        }
        cout << endl;
    }
    return 0;
}
