#include <iostream>

using namespace std;
void swap(int &, int &);
int main()
{
    int x,y;
    cout<<"enter the two integers:\n";
    cin>>x>>y;
    cout<<"the values before the swapping are: "<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<"the values after the swapping are: "<<x<<" "<<y<<endl;
    return 0;
}
void swap(int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}