#include <iostream>
using namespace std;
int gOc(int nums[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int ctr = 0;
        for (int j = 0; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                ctr++;
            }
        }
        if (ctr % 2 != 0)
        {
            return nums[i];
        }
    }
    return -1;
}

int main()
{
    int nums[] = {5, 7, 8, 8, 5, 8, 7, 7};
    int n = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";
    cout << endl;
    int odd = gOc(nums, n);
    cout << "Odd occurrence: " << odd << endl;
    cout << "Hello World" << endl;
    return 0;
}
