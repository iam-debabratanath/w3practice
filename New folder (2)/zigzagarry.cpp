#include<iostream>
using namespace std;
void zig_zag(int nums[],int n)
{
    bool ans =true;
    for(int i=0;i<=n-2;i++)
    {
        if(ans)
        {
            if(nums[i]>nums[i+1])
            swap(nums[i],nums[i+1]);
        }
        else
        {
            if(nums[i]<nums[i+1])
            {
                swap(nums[i],nums[i+1]);
            }
        }

        ans=!ans;
    }
}

int main()
{
   int nums[]={7,9,34,5,7,4,23,03,4};
   int n=sizeof(nums)/sizeof(nums[0]);
   zig_zag(nums,n);


   for(int i=0;i<n;i++)
   {
    cout<<nums[i]<<" ";
   }
   
    cout<<"Hello World"<<endl;
   return 0;
}