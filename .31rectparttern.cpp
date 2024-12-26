#include <iostream>
using namespace std;
int main()
{
    int rows, cols, digit;
    cin >> rows >> cols >> digit;
    
    for (int i = 0; i < rows; i++) 
{
        for (int j = 0; j < cols; j++)
{
            cout << digit << " ";
        }
        cout << endl;
    }
    return 0;
}
