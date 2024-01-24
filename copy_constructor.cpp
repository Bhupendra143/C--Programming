#include <iostream>

using namespace std;
class copy_constructor
{
private:
    int x,y;
public:
    copy_constructor():x(0),y(0){};
    void SetValue(int x,int y){
        this->x = x;
        this->y = y;
    }
    void ShowValue(){
        cout << x << " " << y << endl;
    }
    copy_constructor(copy_constructor & obj){
        x = obj.x;
        y = obj.y;
        cout<<"copy constructor called" << endl;
    }
    
};
int main()
{
    copy_constructor c1,c2;
    c1.SetValue(1,2);
    c2.SetValue(5,10);
    copy_constructor c3=c2;
    c2=c1;
    c1.ShowValue();
    c2.ShowValue();
    c3.ShowValue();
    return 0;
}