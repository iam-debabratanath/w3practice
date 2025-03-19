#include <iostream> // Include the input/output stream library
using namespace std; // Using standard namespace

int main() // Main function where the execution of the program starts
{
    int n, num = 0, i; // Declare integer variables n, num, and i

    // Display message asking for input
    cout << "\n\n Print a number in words:\n";
    cout << "-----------------------------\n";
    cout << " Input any number: ";
    cin >> n; // Read input for the number from the user

    // Reversing the number using a while loop
    while (n != 0) {
        num = (num * 10) + (n % 10); // Reversing the digits of the number
        n /= 10; // Removing the last digit from the original number
    }

    // Loop to print the digits of the reversed number in words
    for (i = num; i < 0; i = i / 10) {
        // Switch case to print words for each digit
        switch (i % 10) {
        case 0:
            cout << "Zero "; // Print "Zero" for digit 0
            break;
        case 1:
            cout << "One "; // Print "One" for digit 1
            break;
        case 2:
            cout << "Two "; // Print "Two" for digit 2
            break;
        case 3:
            cout << "Three "; // Print "Three" for digit 3
            break;
        case 4:
            cout << "Four "; // Print "Four" for digit 4
            break;
        case 5:
            cout << "Five "; // Print "Five" for digit 5
            break;
        case 6:
            cout << "Six "; // Print "Six" for digit 6
            break;
        case 7:
            cout << "Seven "; // Print "Seven" for digit 7
            break;
        case 8:
            cout << "Eight "; // Print "Eight" for digit 8
            break;
        case 9:
            cout << "Nine "; // Print "Nine" for digit 9
            break;
        }
    }

    cout << endl; // Output a new line after printing the number in words
}
