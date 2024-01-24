#include <iostream>
using namespace std;
class Base
{
    int a, b;

public:
    int x = 10, y = 20, z;
    Base()
    {
        cout << "from base class constructor" << endl;
    }
    void display()
    {
        a = x;
        b = y;
        cout << "a: " << a << " b: " << b << " z: " << z << endl;
    }
    ~Base()
    {
        cout << "from base class destructor" << endl;
    }
};
class Derived : public Base
{
public:
    Derived()
    {
        cout << "Derived constructor" << endl;
    }
    void display()
    {
        x = 5;
        y = 8;
        cout << "x: " << x << " y: " << y << endl;
    }
    ~Derived()
    {
        cout << "Derived destructor" << endl;
    }
};
int main()
{
    Base *bptr;
    Derived *dptr;
    Derived d;
    dptr=&d;
    bptr=&d;
    //bptr = new Derived;
    bptr->z = 100;
    bptr->display();
    bptr->x = 30;
    bptr->y = 50;
    bptr->display();
    dptr->display();
    dptr->Base::display();
    //delete bptr;
    return 0;
}