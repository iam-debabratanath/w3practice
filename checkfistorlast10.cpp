#include<iostream>
using namespace std;
bool test(string s)
{
    return s[0] == '10' || s[s.length() - 1] == '10';
}
int main() 
{
    string combined;
    string temp;
    while (true) 
    {
        cin >> temp;
        if (temp == "stop") break;
        combined += temp; 
    }   
    cout << "Combined string: " << combined << endl;   
    cout<<test(combined)<<endl;
    return 0;
}    

