// function return by reference in C++
#include <iostream>
using namespace std;
int &max(int &x, int &y);
int main()
{
    int a, b;
    cout << "enter the two integers" << endl;
    cin >> a >> b;
    cout << "before calling the function a=" << a << "and b=" << b << endl;
    max(a, b) = 203;
    cout << "after calling the function a=" << a << "and b=" << b;
    return 0;
}
int &max(int &x, int &y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}