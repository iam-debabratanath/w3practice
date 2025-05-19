#include <iostream> // Header file for input/output stream
using namespace std; // Using the standard namespace

int main() // Main function
{
    int array1[] = {1, 5, 7, 5, 8, 9, 11, 12}; // Declaration and initialization of the array
    int s1 = sizeof(array1) / sizeof(array1[0]); // Calculate the size of the array

    cout << "Original array: "; // Output label for original array

    for (int i = 0; i < s1; i++) // Loop to output elements of the original array
        cout << array1[i] << " ";

    int i, sum = 12, ctr = 0; // Declaration of variables for sum and count of pairs

    cout << "\nArray pairs whose sum equal to 12: "; // Output label for pairs whose sum equals 12

    for (int i = 0; i < s1; i++) // Loop through the array elements
    {
        for (int j = i + 1; j < s1; j++) // Nested loop to find pairs with sum equal to 12
        {
            if (array1[i] + array1[j] == sum) // Check if the sum of two elements is equal to 12
            {
                cout << "\n" << array1[i] << "," << array1[j]; // Output the pair
                ctr++; // Increment count of pairs
            }
        }
    }

    cout << "\nNumber of pairs whose sum equals 12: "; // Output label for count of pairs
    cout << ctr; // Output the count of pairs

    return 0; // Return 0 to indicate successful execution
}
