// Concept of inline function in C++
#include <iostream>
using namespace std;
inline float sum(float a, float b)
{
    float sum = a / b;
    return sum;
}
int main()
{
    float p, q; 
    float k;
    cout << "Enter the two numbers " << endl;
    cin >> p >> q;
    k = sum(p, q);
    cout << "the sum is=" << k << endl;
    return 0;
} 