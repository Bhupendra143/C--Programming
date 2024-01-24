// Concept of inline function in C++
#include <iostream>
using namespace std;
/*inline int sum(int a, int b)
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
}*/
class InlineFunction
{
    int x, y;

public:
    inline int sum(int a, int b)
    {
        return (a + b);
    }
};
int main()
{
    int sum;
    InlineFunction s;
    InlineFunction *ptr;
    ptr = &s;
    sum = ptr->sum(2, 3);
    cout << "the sum is=" << sum << endl;
}