#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float ar, s;
    cin >> s;
    ar = (6 * (s * s)) / (4 * tan(M_PI / 6));
    cout << "The area of the hexagon with side " << s << " is: " << ar << "\n";
    return 0;
}
