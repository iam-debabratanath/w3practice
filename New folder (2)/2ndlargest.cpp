#include <iostream>
using namespace std;
int find_second_smallest(int arr[], int size)
{
    int smallest_num, second_smallest_num;
    if (arr[0] < arr[1])
    {
        smallest_num = arr[0];
        second_smallest_num= arr[1];
    }
    else
    {
        smallest_num = arr[1];
        second_smallest_num = arr[0];
    }
    for (int i = 2; i < size; i++)
    {
        if (arr[i] < smallest_num)
        {
            second_smallest_num = smallest_num;
            smallest_num = arr[i];
        }
        else if (arr[i] < second_smallest_num && arr[i] > smallest_num)
        {
            second_smallest_num = arr[i];
        }
    }
    return second_smallest_num;
}


int main()
{
    int array_num[7] = {5, 6, 7, 2, 3, 4, 12};
    int n = sizeof(array_num) / sizeof(array_num[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << array_num[i] << " ";
    int second_smallest_num = find_second_smallest(array_num, n);
    cout << "\nSecond smallest number: " << second_smallest_num;

    return 0;
}