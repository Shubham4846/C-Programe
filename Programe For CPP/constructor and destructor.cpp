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
        cout<<"\t inside default constructor \n";
    }
    void main(int n1,int n2,int n3)
    {
        i=n1;
        k=n2;
        x=n3;
        cout<<"inside default parameter \n";
    }

     ~demo()
    {
        cout<<"\t inside default destructor \n";
    }


    void fun()
    {
        cout<<"\t inside fun \n";
        cout<<"\t inside run \n";
        cout<<"\t inside sun \n";
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
