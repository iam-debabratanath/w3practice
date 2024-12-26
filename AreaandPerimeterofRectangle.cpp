#include <iostream>
using namespace std;

int main() {
    int l,w, area, perimeter;
    
    cin>>l>>w;
    area=l*w;
    perimeter=2*(l+w);
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;
    return 0;
}
