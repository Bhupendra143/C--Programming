#include <iostream>

using namespace std;
class sum
{
    int a,b;

public:
    sum(int x, int y)
    {
        a = x;
        b = y;
        cout <<"the sum is " << a+b <<endl;
    }
};
class difference : public sum
{
    int p,q;
    public:difference(int c,int d,int e,int f): sum(c,d){
        p=e;
        q=f;
        cout <<"the difference is " <<p-q <<endl;
    }
};
int main()
{
    difference d(1,2,3,4);
    return 0;
}