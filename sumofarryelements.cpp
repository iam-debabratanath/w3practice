#include <iostream>
using namespace std;
int test(int a1[])
{
    return a1[0] + a1[1] + a1[2] + a1[3] + a1[4];
}

int main()
{
    int nums[] = {10, 20, 30, 40, 50};

    cout << test(nums) << endl;
    return 0;
}
