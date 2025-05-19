#include<iostream>
using namespace std;
void NGN(int nums[], int n)
{
    for(int i=0;i<n;i++)
    {
        int next = -1;
        for(int j=i+1;j<n;j++)
        {
            if(nums[j]>nums[i])
            {
                next=nums[j];
                break;
            }
        }
        cout<<nums[i]<<": "<<next<<endl;
    }

}




int main()
{
    int array_num[] = {5, 6, 7, 6, 99, 82, 2, 3, 4, 12};
    int n = sizeof(array_num) / sizeof(array_num[0]);

    NGN(array_num, n);
    cout << "Hello World" << endl;
    return 0;
}
