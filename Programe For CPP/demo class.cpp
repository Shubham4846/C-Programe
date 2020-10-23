// program

#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
public:
    int i,j;
    demo()
    {
        cout<<"inside default constructor\n";
    }
    void fun()
    {
        cout<<"\n inside fun\n";
        cout<<"\n inside run\n";
        cout<<"\n inside sun\n";
    }
private:
       int k,l;
       void run()
    {
        cout<<"inside run";
    }
protected:
       int x,y;
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
