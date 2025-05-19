#include <iostream>
using namespace std;
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void Sort_012(int nums[], int n)
{
    int i=0;
    int j=n-1;
    int mN=0;

    while(mN<=j)
    {
        switch(nums[mN])
        {
            case 0:
            swap(&nums[i++], &nums[mN++]);
            break;

            case 1:
            mN++;
            break;

            case 2:
            swap(&nums[mN], &nums[j--]);
            break;
        }
    }
}
int main()
{
    int nums[] = {0, 1, 2, 2, 1, 1, 0, 0, 1}; ;
    int n = sizeof(nums) / sizeof(nums[0]);
    Sort_012(nums, n);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}