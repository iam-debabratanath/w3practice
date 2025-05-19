#include<iostream>
using namespace std;
void FGE(int nums[],int n)
{   
    for(int i=0;i<n;i++)
    { 
        int ctr=0;
        for(int j=0;j<n;j++)
        {
            if(nums[j]>nums[i])
            ctr++;
        }
        if(ctr>=2)
        {
            cout<<nums[i]<<" ";
        }
    }

}


int main()
{
   int nums[]={7,9,34,5,7,4,23,03,4};
   int n=sizeof(nums)/sizeof(nums[0]);

   FGE(nums,n);
   
    cout<<"Hello World"<<endl;
   return 0;
}

