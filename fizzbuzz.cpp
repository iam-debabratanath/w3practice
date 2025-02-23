#include<iostream>
using namespace std;
string test(string s)
{
    // if((s.substr(0,1)=="F") && (s.substr(s.length()-1,1)) =="B")
    // {
    //     return "FizzBuzz";
    // }
    // else if(s.substr(0,1)=="F")
    // {
    //     return "Fizz";
    // }
    // else if(s.substr(s.length()-1,1)=="B")
    // {
    //     return "Buzz";
    // }
    // else 
    // {
    //     return s;
    // }
    //string s ; 
    
    char first = s[0],last = s[s.length()-1];
    switch (first)
    {
    case 'F':
        switch (last)
        {
        case 'B':
            return "fizzbuzz";
            break;
        
        default:
        return "fizz";
            break;
        }
        break;
    default:
        break;
    }



    switch (last)
    {
    case 'B':
        return "Buzz";
        break;
    
    default:
    return s ;
        break;
    }
}

int main()
{
    string q;
    cin>>q;
   cout<<test(q)<<endl;
   return 0;
}
