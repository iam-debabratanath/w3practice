#include <iostream>
using namespace std;
void swap_elements(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void R_A_E(int nums[], int n, int x)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (abs(nums[j] - x) < abs(nums[min] - x))
            {
                min = j;
            }
        }
        swap_elements(&nums[i], &nums[min]);
    }
}
int main()
{
    int nums[] = {0, 9, 7, 2, 12, 11, 20};
    int n = sizeof(nums) / sizeof(nums[0]);
    int x = 12;
    R_A_E(nums, n, x);

    {

        for (int i = 0; i < n; i++)
        {
            cout << nums[i] << " ";
        }
    }

    cout << "Hello World" << endl;
    return 0;
}
