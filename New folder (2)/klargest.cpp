#include<iostream>
using namespace std;
void klargest(int arr[], int size)
{
    for(int i=0;i<size-1;i++)
    {
        int maxIndex=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]>arr[maxIndex])
            {
                maxIndex=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[maxIndex];
        arr[maxIndex]=temp;
    }

}
void printLargestElements(int arr[], int size, int k)
{
    klargest(arr,size);
    cout<<k<<endl;
    for(int i=0;i<k;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{

    int numbers[]={42,54,23,52,3,45,23,45,25};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    int k=4;
    printLargestElements(numbers,length,k);
    
   
    cout<<"Hello World"<<endl;
   return 0;
}
