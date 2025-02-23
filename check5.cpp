#include<iostream>
#include<time.h>
using namespace std;
int test(int numbers[], int arr_length)
{
    int ctr = 0;
    for(int i = 0; i < arr_length - 1; i++)
    {
        if((numbers[i] == 5 && numbers[i+1] == 5) || (numbers[i] == 5 && numbers[i+1] == 6))
        { 
            ctr++;
            // return 0;
            break;
        }
    }
    for(int i )____
    return ctr;
}
int main() 
{
    int arr_length;	
    int nums1[] = {5, 5, 2};	
    arr_length = sizeof(nums1) / sizeof(nums1[0]);
    cout << test(nums1, arr_length) << endl; 
    return 0;
}