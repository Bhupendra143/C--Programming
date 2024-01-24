#include <iostream>

using namespace std;
class demo
{
    int a;

public:
    void get_data()
    {
        cout << "enter an integer:" << endl;
        cin >> a;
    }
    void put_data()
    {
        cout << "the value of the integer: " << a << endl;
    }
    // void operator=(demo aa)//no need to write but  i don't know the reason why
    // {
    //     a = aa.a;
    // }
};
int main()
{
    demo aa, bb;
    aa.get_data();
    bb = aa; //    = operator overloaded automatically
    aa.put_data();
    bb.put_data();
    //aa==bb;
    return 0;
}