#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void S_O_E(int nums[], int size)
{
    int lN=0, rN=size-1;
    while(nums[lN]%2==0 && lN<rN)
    {
        lN++;
    }
    while(nums[rN]%2==1&&lN<rN)
    {
        rN--;
    }
    if(lN<rN)
    {
        swap(&nums[lN],&nums[rN]);
        lN++;
        rN--;
    }

}






int main()
{
   int nums[] = {0, 1, 3, 4, 5, 6, 7, 8, 10};
   int n=sizeof(nums)/sizeof(nums[0]);
   S_O_E(nums,n);


   for(int i=0;i<n;i++)
   {
    cout<<nums[i]<<" ";
   }
   
    cout<<"Hello World"<<endl;
   return 0;
}