#include <iostream>  // Including the input/output stream library
using namespace std; // Using the standard namespace

// Function that rotates the elements of an array by one position to the left
int *test(int nums[])
{
    // Static array storing the elements after rotation
    static int r_array[] = {nums[1], nums[2], nums[3], nums[0]};
    return r_array; // Returning the rotated array
}

// Main function
int main()
{
    int *p; // Pointer to an integer

    int nums[] = {10, 20, 30, 40};                   // Define an array nums
    int arr_length = sizeof(nums) / sizeof(nums[0]); // Calculate the length of nums

    cout << "Original array: " << endl;
    for (int i = 0; i < arr_length; i++)
    {
        cout << nums[i] << " "; // Output the original array
    }

    p = test(nums); // Rotate the array and assign it to pointer p

    cout << "\nRotated array: " << endl;
    for (int i = 0; i < arr_length; i++)
    {
        cout << *(p + i) << " "; // Output the rotated array
    }

    return 0; // Return statement indicating successful termination of the program
}
