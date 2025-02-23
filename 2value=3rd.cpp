#include<iostream>
using namespace std;
int test(int x, int y, int z)
{
    if (x == y && y == z)
    {
        return 0;
    }
    else if (x == y)
    {
        return z; 
    }
    else if (x == z)
    {
        return y;
    } 
    else if (y == z) 
    {
        return x;
    }
    else
    {
    return x + y + z;
    }

    // switch ()
    // {
    // case constant expression:
    //     /* code */
    //     break;
    
    // default:
    //     break;
    // }
}

int main()
{
    cout << test(4, 5, 7) << endl; 
    cout << test(7, 4, 12) << endl;
    cout << test(10, 10, 12) << endl;
    cout << test(12, 12, 18) << endl;
    return 0;
}
