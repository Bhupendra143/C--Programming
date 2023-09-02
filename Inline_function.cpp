// Concept of inline function in C++
#include <iostream>
using namespace std;
inline int sum(int a, int b)
{
    int sum = a + b;
    return sum;
}
int main()
{
    int p, q, k;
    cout << "Enter the two numbers to add" << endl;
    cin >> p >> q;
    k = sum(p, q);
    cout << "the sum is=" << k << endl;
    return 0;
}