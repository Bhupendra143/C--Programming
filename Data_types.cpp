#include <iostream>
using namespace std;
class introduction
{
private:
    string a;
    const char name[5] = "John";
    string cppString = "Hello, C++!";

public:
    introduction()
    {
        cout << "Enter your name:\n";
        getline(cin, a);
        cout << "your name is:";
        cout << a<<endl<<name<<endl<<cppString<<endl;
    }
};
int main()
{
    introduction info;
}