#include <iostream>
#include <math.h>
using namespace std;
class point_distance_calc
{
private:
    int x, y;
    float result;

public:
    //point_distance_calc() : x(0), y(0) { cout << "default constructor called!!!" << endl; }
    //point_distance_calc(int a, int b) : x(a), y(b) { cout << "parametrized constructor called!!!" << endl; }
    // point_distance_calc(point_distance_calc &p)
    // {
    //     cout << "copy constructor called!!!" << endl;
    //     x = p.x;
    //     y = p.y;
    // }
    void get_point();
    float calculator(point_distance_calc, point_distance_calc);
    void display1()
    {
        cout << "The distance between two points is " << result << endl;
    }
    void display2()
    {
        cout << "the value of x and y is: " << x << ", " << y <<endl;
    }
};
void point_distance_calc::get_point()
{
    cin >> x >> y;
}
float point_distance_calc::calculator(point_distance_calc o1, point_distance_calc o2)
{
    result = sqrt(pow(o2.x - o1.x, 2) + pow(o2.y - o1.y, 2));
    cout << "the calculator function called!!! "<< endl;
    return result;
}
int main()
{
    //point_distance_calc d1(4, 3), d2(2, 1), d3, d4,d5;
    point_distance_calc d1, d2, d3, d4;
    cout << "enter a points x1 and y1" << endl;
    d1.get_point();
    cout << "enter a points x2 and y2" << endl;
    d2.get_point();
    d3.calculator(d1, d2);
    d3.display1();
    d4 = d2;//no copy constructor invoked
    d4.display2();
    return 0;
}