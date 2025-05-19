#include <iostream>
using namespace std;
void sE(int nums[], int n)
{

    int result[n];
    int j=0; 
    for(int i=0;i<n;i++)
    {
        if(nums[i]>=0)
        result[j++]=nums[i];
    }
    if(j==n||j==0)
    {
        return;
    }
    if(j==n||j==0)
    {
       
        return;
    }
    
    for(int i=0;i<n;i++)
    {
        if(nums[i]<0)
        {
            result[j++]=nums[i];
        }
    }
    memcpy(nums,result,sizeof(result));
}
int main()
{
    int nums[] = {0, 9, -7, 2, -12, 11, -20};;
    int n = sizeof(nums) / sizeof(nums[0]);
    sE(nums,n);
    {

        for (int i = 0; i < n; i++)
        {
            cout << nums[i] << " ";
        }
    }

    cout << "Hello World" << endl;
    return 0;
}