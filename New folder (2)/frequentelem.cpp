#include <iostream>
using namespace std;
void MON(int nums[], int n)
{
    int max_count = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] == nums[j])
                count++;
        }
        if (count > max_count)
        {
            max_count = count;
        }
        }
        // Print elements with max_count frequency
        for(int i=0; i<n; i++)
        {
            int count=1;
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]==nums[j])
                {
                    count++;
                }
            }
            if(count==max_count)
            {
                cout<<nums[i]<<endl;
            }
        }


}

int main()
{
    int array_num[] = {5, 6, 7, 6, 99, 82, 2, 3, 4, 12};
    int n = sizeof(array_num) / sizeof(array_num[0]);

    MON(array_num, n);
    cout << "Hello World" << endl;
    return 0;
}
