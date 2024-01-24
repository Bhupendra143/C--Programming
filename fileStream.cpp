#include <iostream>
#include <fstream>
using namespace std;
class Employee
{
    char name[20];
    int id;
    char email[30];

public:
    void EnterData()
    {
        cout << "Enter name, id and email of employee" << endl;
        cin >> name >> id >> email;
    }
    void ShowData()
    {
        cout << "Name: " << name << endl
             << "id:" << id << endl
             << "email:" << email << endl;
    }
};
void WriteFile()
{
    Employee emp;
    ofstream outfile("employee.bin", ios::binary | ios::out | ios::app);
    emp.EnterData();
    outfile.write(reinterpret_cast<char *>(&emp), sizeof(emp));
    outfile.close();
}
void ReadFile()
{
    Employee emp;
    cout << "Data Read from file:" << endl;
    ifstream infile("employee.bin");
    while (infile.read(reinterpret_cast<char *>(&emp), sizeof(emp)))
    {
        emp.ShowData();
    }
    infile.close();
}
int main()
{
    WriteFile();
    ReadFile();
    return 0;
}