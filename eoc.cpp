#include <iostream>
using namespace std;

// Function to extract characters at even indices
string test(string x) {
    string result = ""; // Initialize an empty result string
    for (int i = 0; i < x.length(); i++) {
        if (i % 2 == 0) { // Check if the index is even
            result += x[i]; // Append the character to the result
        }
    }
    return result;
}

int main() {
    string r;
    cout << "Enter a string: ";
    cin >> r; // Input string from the user
    cout << "Characters at even indices: " << test(r) << endl;
    return 0; // Successful execution
}
