#include <iostream>
using namespace std;
int main() 
{
    long bn1, bn2;
    int i=0, r=0, sum[20];
    cin>>bn1 >>bn2;
    while (bn1 != 0 || bn2 != 0)
{
        sum[i++] = (bn1 % 10 + bn2 % 10 + r) % 2;
        r = (bn1 % 10 + bn2 % 10 + r) / 2;
        bn1 /= 10;
        bn2 /= 10;
    }
    if (r) sum[i++] = r;
    while (--i >= 0) cout << sum[i];
    cout << endl;
    return 0;
}
