#include <iostream>
using namespace std;
class introduction
{
private:
    string a;
    const char name[20] = "you are handsome";
    string cppString = "Hello, C++!";

public:
    introduction()
    {
        cout << "Enter your name:\n";
        getline(cin, a);// input string with whitespace
        cout << "your name is:";
        cout << a<<endl<<name<<endl<<cppString<<endl;
    }
};
int main()
{
    introduction info;
}