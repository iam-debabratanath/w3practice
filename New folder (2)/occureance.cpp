#include<iostream>
using namespace std;
int count_occ(int arr[],int n,int x)
{
    int result =0;
    for(int i=0;i<n;i++)
    {
        if(x=arr[i])
        {
            result++;
        }
    }
    return result;
}



int main()
{

   int nums[] = {5, 7, 8, 8, 5, 8, 7, 7}; 
   int n = sizeof(nums) / sizeof(nums[0]);
   int x = 7; 
   cout << "\nNumber of occurrences of 7 : " << count_occ(nums, n, x);
   return 0;
}
