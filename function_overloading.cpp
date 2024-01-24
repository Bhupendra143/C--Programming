// concept of function overloading
#include <iostream>
using namespace std;
float volume(float);//function overloaded 
float volume(int, float);//function overloaded 
float volume(float, float, float);//function overloaded 
int main()
{
    int l, b, h1,h2, r, s;
    cout << "enter the length of the sides of the cube:" << endl;
    cin >> s;
    cout << "enter the radius of the base and height of cylinder:" << endl;
    cin >> r >> h1;
    cout << "enter the length,breadth and height of the rectangular box:" << endl;
    cin >> l >> b >> h2;
    cout << "Volume of cube:" << volume(s);
    cout << "\nVolume of cylinder:" << volume(r, h1);
    cout << "\nVolume of rectangular box:" << volume(l, b, h2);
    return 0;
}
float volume(float s)
{
    float v = s * s * s;
    return v;
}
float volume(int r, float h)
{
    float v =3.14 * r * r * h;
    return v;
}
float volume(float l, float b, float h)
{
    float v = l * b * h;
    return v;
}