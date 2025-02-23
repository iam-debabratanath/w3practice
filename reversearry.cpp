#include <iostream>
using namespace std;

int *test(int nums[])
{
    // Define a static array to store the reordered values
    static int r_array[] = {nums[4], nums[3], nums[2], nums[1], nums[0]};
    return r_array; // Returning a pointer to static memory
}

int main()
{
    int *p;
    int nums[] = {0, 10, 20, 30, 40};
    int arr_length = sizeof(nums) / sizeof(nums[0]);

    // Print original array
    cout << "Original array: ";
    for (int i = 0; i < arr_length; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    // Call function and store pointer
    p = test(nums);

    // Print reordered array correctly
    cout << "Reordered array: ";
    for (int i = 0; i < arr_length; i++)
    { // Now iterating over all 5 elements
        cout << *(p + i) << " ";
    }
    cout << endl;

    return 0;
}
