#include <iostream>
using namespace std;

class Box
{
private:
    double length;
    double breadth;
    double height;
public:
    static int objectCount;
    Box(double l, double b, double h)
    {
        cout << "Constructor called." << endl;
        length = l;
        breadth = b;
        height = h;
        objectCount++;
    }
    double Volume()
    {
        return length * breadth * height;
    }
};
int Box::objectCount = 0;

class airplane
{
    private:
    string country;
    string planemodel;

    public:
    void setcountry(string c)
    {
    country=c;
    }
    void setplanemodel(string p)
    {
    planemodel=p;
    }
    string getcountry()
    {
    return country;
    }
    string getplanemodel()
    {
        return planemodel;
    }
    bool takeoff()
    {
        cout<<"Flying"<<endl;
        return true;
    }
    void landing()
    {
        cout<<"Landed"<<endl;

    }
};


int main()
{
    airplane boeing;
    boeing.setcountry("USA");
    airplane airbus;
    airbus.setcountry("France");
    
    airbus.setplanemodel("A380");
    cout<<boeing.takeoff()<<endl;
    airbus.landing();
    cout<<airbus.takeoff()<<endl;
    
    // string c1 = boeing.getcountry();
    //cout<<c1<<endl;
    
    cout<<boeing.getcountry()<<endl;
    cout<<airbus.getplanemodel()<<endl;
    
    return 0;
}
