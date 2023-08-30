#include <iostream>
using namespace std;
class introduction
{
private:
        const char a[20]="hello world";

public:
    introduction()
    {
        cout << a;
    }
};
int main()
{
    introduction info;
}