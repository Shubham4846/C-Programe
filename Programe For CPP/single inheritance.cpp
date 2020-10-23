// program

#include<iostream>
#include<conio.h>
using namespace std;
class base
{
private:
    int private;
    void fun()
    {
        cout<<"inside fun of base";
    }
protected:
        int protected;
        void gun()
        {
             cout<<"inside gun of base";
        }
public:
    int public;
    void sun()
    {
         cout<<"inside sun of base";
    }
    base()
    {
        private=protected=public=0;
        cout<<"inside default constructor of base";
    }
    base(int N1,int N2,int N3)
    {
        pri=N1;
        pro=N2;
        pub=N3;
        cout<<"inside default parameter of base";
    }

     ~base()
    {
        cout<<"inside default destructor of base";
    }
};
void frnd()
{
    base obj;
    obj.fun();
    obj.gun();
    obj.sun();
    cout<<"val1="<<private<<endl;
    cout<<"val2="<<protected<<endl;
    cout<<"val3="<<public<<endl;
}
class derived:class base
{
private:
    int i;
protected:
    int x;
public:
    int k;
    derived()
    {
        i=x=k=0;
        cout<<"inside derived default constructor";
    }
    derived(int N1,int N2,int N3)
    {
        i=N1;
        x=N2;
        k=N3;
        cout<<"inside derived default parameter";
    }

     ~derived()
    {
        cout<<"inside derived default destructor";
    }
};
int main()
{
    base bobj;
    getch();
    return ;
}


