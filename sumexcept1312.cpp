#include<iostream>
using namespace std;
class solution
{
    public:
    int test(int x,int y,int z)
    {
        return fix_num(x)+fix_num(y)+fix_num(z);
    }
    int fix_num(int n)
    {
        return(n<13&& n>9)||(n>17 && n<21)?0:n;
    }
};
int main()
{
   solution* sol = new solution();
   cout << sol->test(4, 5, 7) << endl;
   return 0;
}
