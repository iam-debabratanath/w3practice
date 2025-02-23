#include<iostream>
using namespace std;

static bool test(int nums[],int arr_length)
{
    for(int i=0;i<arr_length-1;i++)
    {
        if(nums[i+1]==nums[i] && nums[i]==15)
        return true;
    }
    return false;
}
int main()
{
   int arr_length;
   int nums1[]={5,5,1,15,15};
   arr_length=sizeof(nums1)/sizeof(nums1[0]);

   cout<<test(nums1,arr_length)<<endl;
   return 0;
}
