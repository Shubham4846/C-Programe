#include<iostream>
#include<conio.h>
using namespace std;
class integer
{
   int m,n;
     public:
     integer(int,int);          //constructor declared

     void display(void)
     {
       cout<<"m="<<m<<endl;
       cout<<"n="<<n<<endl;
     }
};
integer::integer(int x,int y)    //paramerterized constructor
{
    m=x;
    n=y;
}
int main()
{
    integer int1(10,20);               //constructor called implicity
    integer int2 = integer(100,200);  //constructor called explicity
    cout<<"object1"<<endl;
    int1.display();
    cout<<"object2"<<endl;
    int2.display();
    return 0;
}
