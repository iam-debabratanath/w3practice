#include<iostream>
using namespace std;
bool test(int nums[],int arr_length)
{
    for(int i=0;i<arr_length-2;i++)
    {
        if(nums[i]==1 && nums[i+1]==2 && nums[i+2]==3)
        return true;
    }
    return false;
}
int main()
{
   int arr_length;
   int nums1[]={1,1,2,3,1};
   arr_length=sizeof(nums1)/sizeof(nums1[0]);

   cout<<test(nums1,arr_length)<<endl;
   return 0;
}
