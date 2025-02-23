#include<bits/stdc++.h>
#include<iostream>

using namespace std;
string test(string s)
{
    int c,d;
    cin>>c>>d;
    //cout<<s.substr((s.length()-c),(s.length()-d))<<endl;
    // cout<<s.substr(c,d)<<endl;
    cout<<s.substr((s.length()-c),d)<<endl;
};
int main()
{
    cout<<"Input String"<<endl;
    string t;
    getline(cin,t);    
    cout<<test(t)<<endl;
    return 0;
}