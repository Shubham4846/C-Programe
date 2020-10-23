// program

#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
public:
    int i;
    demo()
    {
        i=k=x=0;
        cout<<"inside default constructor\n";
    }
    void demo(int n1,int n2,int n3)
    {
        i=n1;
        k=n2;
        x=n3;
        cout<<"inside default parameter";
    }

     ~demo()
    {
        cout<<"inside default destructor\n";
    }


    void fun()
    {
        cout<<"\tinside fun\n";
        cout<<"\tinside run\n";
        cout<<"\tinside sun\n";
    }
private:
       int k;
       void run()
    {
        cout<<"inside run";
    }
protected:
       int x;
       void sun()
    {
        cout<<"inside sun";
    }
};
int main()
{
    demo obj;
    obj.fun();
    //obj.run();
    //obj.sun();
    getch();

}
