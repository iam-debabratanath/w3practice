#include <iostream>
using namespace std;
// void update(int*pntr)
// {
//     *pntr=120;
// }
// void swap(int *px, int *py)
/* interchange *px and *py */
//{
// int temp;
// temp = *px;
// *px = *py;
// *py = temp;
//}

// void print1(int tab[], int N);
// void print2(int tab[], int N);
// void print3(int *tab, int N);
// void print4(int *tab, int N);

int main()
{

    /// cout<< *y <<endl;
    // cout<< &y <<endl;
    // cout<< pntr <<endl;
    // cout<< *pntr <<endl;
    // cout<< &pntr <<endl;

    // int count = 10;
    // int *ip;
    // ip = &count;
    // printf ("count = %i, *ip = %i\n", count, ip);
    // *ip=4;
    // printf ("count = %i, *ip = %i\n", count, *ip);

    // int x=10;
    // int *ptr=&x;

    // cout<<"Value "<< x <<endl;
    // cout<<"Adress "<<&x<<endl;
    // cout<<"pointer "<<ptr <<endl;
    // cout<<"Pointed Value "<< *ptr <<endl;

    // int arr[]={10,20,30};
    // int *p=arr;

    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<*(p+1)<<endl;
    // cout<<*(p+2)<<endl;

    // int *p1=new int(42);
    // cout<<"Value "<<*p1<<endl;
    // delete p1;

    // int z=7;
    // int *h=&z;
    // int **dh=&h;
    // cout<<"value of z"<<**dh<<endl;

    // int ip;;
    // cin>>ip;
    // int *x=&ip;

    // if(x!=NULL)
    // printf("%d\n",*x);

    // if(x)
    // printf("%d\n",*x);

    // int *ip = NULL;

    // if (ip != NULL)
    //     printf("%d\n", *ip);

    // int a=3, b=5;
    // swap(&a, &b);
    // {
    // int temp;
    // temp = *px;
    // *px = *py;
    // *py = temp;
    // }

    // int a=3, b=5;
    // swap(&a, &b);

    // int a = 3, b = 5;
    // cout << "Before swap: a = " << a << ", b = " << b << endl;

    // swap(&a, &b);

    // cout << "After swap: a = " << a << ", b = " << b << endl;

    // int arr[] = {1, 2, 3, 4, 5};
    // int N = sizeof(arr) / sizeof(arr[0]); // Automatically calculates array size

    // cout << "Using print1: ";
    // print1(arr, N);
    // cout << endl;

    // cout << "Using print2: ";
    // print2(arr, N);
    // cout << endl;

    // cout << "Using print3: ";
    // print3(arr, N);
    // cout << endl;

    // cout << "Using print4: ";
    // print4(arr, N);
    // cout << endl;

    // return 0;

    // Print using array indexing

    void print1(int tab[], int N)
    {
        for (int i = 0; i < N; i++)
            cout << tab[i] << " ";
    }

    // Print using pointer arithmetic (method 1)

    void print2(int tab[], int N)
    {
        for (int *ptr = tab; ptr < tab + N; ptr++)
            cout << *ptr << " ";
    }

    // Print using pointer arithmetic (method 2)

    void print3(int *tab, int N)
    {
        for (int *ptr = tab; ptr < tab + N; ptr++)
            cout << *ptr << " ";
    }

    // Print using pointer increment

    void print4(int *tab, int N)
    {
        for (int i = 0; i < N; i++, tab++)
            cout << *tab << " ";
    }

    return 0;
}
