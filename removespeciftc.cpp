#include<iostream>
using namespace std;
int main()
{
   //int x;
   // cin>>x;
   // if((x%4==0 && x%100!=0)||x%400==0)
   // {
   //    cout<<"leap year"<<endl;
   // }
   // else
   // {
   // cout<<"not leap year"<<endl;
   // }
   
   int day;
   cin>>day;
   switch (day) 
   {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
    
}
   return 0;
}
