#include <iostream>  // Including the input/output stream library
using namespace std; // Using the standard namespace

// Function that creates and returns an array containing elements from given indices of two input arrays
int *test(int nums1[], int nums2[])
{
    // Static array storing the elements at index 2 from nums1 and nums2
    static int max_array[] = {nums1[2], nums2[2]};
    return max_array; // Returning the new array
}

// Main function
int main()
{
    int *p; // Pointer to an integer

    int nums1[] = {0, 10, 20, 30, 40};     // Define an array nums1
    int nums2[] = {0, -10, -20, -30, -40}; // Define an array nums2

    p = test(nums1, nums2); // Store the result of test function in pointer p

    cout << "\nNew array: " << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << *(p + i) << " "; // Output the new array elements
    }

    return 0; // Return statement indicating successful termination of the program
}
