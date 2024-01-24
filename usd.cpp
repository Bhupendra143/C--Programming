#include <iostream>
using namespace std;
class celsius
{
    float cel;
public:
    celsius() : cel(0) {}
    celsius(float c)
    {
        cel = c;
    }
    void display()
    {
        cout << "celsius temperature:" << cel << endl;
    }
};
class fahrenheit
{
    float fr;
public:
    fahrenheit(float f) : fr(f) {}
    operator celsius()
    {
        float f = ((fr - 32) * 5) / 9;
        return celsius(f);
    }
};
int main()
{
    fahrenheit fr(98.6);
    celsius cel;
    cel = fr;
    cel.display();
    return 0;
}