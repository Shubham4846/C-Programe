#include<iostream>
#include<conio.h>
using namespace std;
class integer
{
    int x,y;
public:
    integer()        //default constructor
    {
        x=0;
        y=0;
    }
    integer(int a,int b)     //paramerterized constructor
    {
        x=a;
        y=b;
    }
    integer(integer &m)       //copy constructor
    {
        x=m.x;
        y=m.y;
    }
    void show()
    {
        cout<<"inside show function"<<endl;
        cout<<"x="<<x<<endl;
        cout<<"y="<<y<<endl;
    }
};
int main()
{
    integer obj1;          //default constructor
    integer obj2(10,20);   //paramerterized constructor
    integer obj3(obj1);    //copy constructor
    integer obj4(obj2);    //copy constructor
    obj1.show();
    obj2.show();
    obj3.show();
    obj4.show();
    getch();
    return 0;
    return 0;

}
