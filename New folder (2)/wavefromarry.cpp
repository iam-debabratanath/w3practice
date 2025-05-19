#include<iostream>
using namespace std;

// Function to swap two elements using pointers
void swap_elements(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Manual sorting function (Selection Sort)
void manual_sort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        swap_elements(&arr[i], &arr[min_index]);
    }
}

// Function to convert array into wave form
void array_wave(int nums[], int n)
{
    manual_sort(nums, n); // Sort the array first

    for(int i = 0; i < n - 1; i += 2)
    {
        swap_elements(&nums[i], &nums[i + 1]); // Swap adjacent pairs
    }
}

int main()
{
    int nums[] = {4, 1, 5, 9, 12, 9, 22, 45, 7};
    int n = sizeof(nums) / sizeof(nums[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";

    array_wave(nums, n);

    cout << "\nWave form of the array: ";
    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";

    return 0;
}
