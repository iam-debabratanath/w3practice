#include<iostream>
using namespace std;
int SMN(int nums[], int start_pos, int end_pos)
{
    if (start_pos > end_pos)
    {
        return end_pos + 1;
    }
    if (nums[start_pos] != start_pos)
    {
        return start_pos;
    }
    int mid = (start_pos + end_pos) / 2;
    if (nums[mid] == mid)
    {
        return SMN(nums, mid + 1, end_pos);
    }
    else
    {
        return SMN(nums, start_pos, mid);
    }
}

int main()
{
      int nums[] = {0, 1, 3, 4, 5, 6, 7, 8, 10};
    int n = sizeof(nums) / sizeof(nums[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";

    int result = SMN(nums, 0, n - 1);
    cout << "\nSmallest missing element is " << result;

    return 0;
 
}
