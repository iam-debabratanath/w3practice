#include <iostream> // Header file for input/output stream
using namespace std; // Using the standard namespace

int main() // Main function
{
    int array1[] = {1, 5, 7, 8, 9, 11}; // Declaration and initialization of the first array
    int array2[] = {6, 8, 10, 11, 12, 16}; // Declaration and initialization of the second array
    int array3[] = {1, 3, 5, 6, 8, 10, 11, 17}; // Declaration and initialization of the third array

    int s1 = sizeof(array1) / sizeof(array1[0]); // Calculate the size of array1
    int s2 = sizeof(array2) / sizeof(array2[0]); // Calculate the size of array2
    int s3 = sizeof(array3) / sizeof(array3[0]); // Calculate the size of array3

    cout << "Original arrays: "; // Output label for original arrays
    cout << "\nArray1: ";
    for (int i = 0; i < s1; i++) // Loop to output elements of array1
        cout << array1[i] << " ";
    cout << "\nArray2: ";
    for (int i = 0; i < s2; i++) // Loop to output elements of array2
        cout << array2[i] << " ";
    cout << "\nArray3: ";
    for (int i = 0; i < s3; i++) // Loop to output elements of array3
        cout << array3[i] << " ";
    cout << "\nCommon elements of the said sorted arrays: "; // Output label for common elements

    int i = 0, j = 0, k = 0; // Initialize iterators for arrays

    // Loop to find common elements among three sorted arrays
    while (i < s1 && j < s2 && k < s3)
    {
        if (array1[i] == array2[j] && array2[j] == array3[k]) // If elements at current positions are equal
        {
            cout << array1[i] << " "; // Output the common element
            i++;
            j++;
            k++;
        }
        else if (array1[i] < array2[j]) // If array1's element is less than array2's element
            i++; // Move to the next element in array1
        else if (array2[j] < array3[k]) // If array2's element is less than array3's element
            j++; // Move to the next element in array2
        else
            k++; // Move to the next element in array3
    }
    return 0; // Return 0 to indicate successful execution
}
