#include<iostream>
using namespace std;
void replaceElem(int nums[],int n)
{
    if(n<=1)
    return;
    int prev=nums[0];
    nums[0]=nums[0]*nums[1];
    for(int i=1;i<n-1;i++)
    {
        int curr_element=nums[i];
        nums[i]=prev*nums[i+1];
        prev=curr_element;
    }
    nums[n-1]=prev*nums[n-1];
}


int main()
{
   int nums[]={7,9,34,5,7,4,23,03,4};
   int n=sizeof(nums)/sizeof(nums[0]);

  replaceElem(nums,n);
    cout << "\nNew array elements: ";
    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";
    cout<<"Hello World"<<endl;
   return 0;
}
