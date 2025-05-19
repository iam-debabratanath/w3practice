#include <iostream>
using namespace std;
void rearrange(int nums[], int n)
{
    int temp[n];
    int sN = 0;
    int lN = n - 1;
    int result = true;

    for (int i = 0; i < n; i++)
    {
        if (result)
        {
            temp[i] = nums[lN--];
        }
        else
        {
            temp[i] = nums[sN++];
        }
        result = !result;
    }
    for (int i = 0; i < n; i++)
    {
        nums[i] = temp[i];
    }
}
int main()
{
    int nums[] = {0, 1, 3, 4, 5, 6, 7, 8, 10};
    int n = sizeof(nums) / sizeof(nums[0]);
    rearrange(nums, n);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}