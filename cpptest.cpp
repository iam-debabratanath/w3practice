#include<bits/stdc++.h>
#include<iostream>


using namespace std;
string test(string s)
{
    
    // cout<<"Assign "<<s<<endl;
 
    // cout<<"length "<<s.length() <<" L-2 "<<s.length()-2 <<endl;
    // cout<<"size "<<s.size() <<" S-2 "<< s.size()-2 <<endl;
    // cout<<"erase,Show "<<s.erase(0,6)<<endl;

    // cout<<"Capacity "<<s.capacity()<<endl;
    // cout<<"Is Empty "<<(s.empty()?"Yes":"No")<<endl;

    // cout<<"CI s[0]"<<s[0]<<endl;
    // cout<<"CI s.at(0)"<<s.at(0)<<endl;
    // cout<<"Front "<<s.front()<<endl;
    // cout<<"Back "<<s.back()<<endl;

    // cout<<"Find Word "<<s.find("World")<<endl;
    // cout<<"Find 'o' "<<s.rfind("o")<<endl;

    // cout<<"Sub String 1 "<<s.substr(0)<<endl;
    // cout<<"Sub String 2 "<<s.substr(7)<<endl;
    // cout<<"Sub String 3 "<<s.substr(0,5)<<endl;

    //cout<<(s.length()-2)<<endl;
    int c,d;
    cin>>c>>d;
    cout<<s.substr(c,s.size()-d)<<endl;
};
int main()
{
    cout<<"Input String"<<endl;
    string t;
    getline(cin,t);    
    cout<<test(t)<<endl;
    return 0;
}
