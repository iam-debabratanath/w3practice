#include <iostream>
using namespace std;

// Function to test if the string contains between 2 and 3 'z' characters
bool test(const string& x)
{
    int ctr = 0;
    for (size_t i = 0; i < x.length(); i++)
    {
        if (x[i] == 'z')
        {
            ctr++;
        }
    }
    return (ctr > 1 && ctr < 4);
}

int main()
{
    string c;
    cout << "Enter a string: ";
    getline(cin, c); // Use getline to read the entire line
   cout<<test(c)<<endl;
    return 0;
}
