#include<iostream>
#include<conio.h>

using namespace std;
class base
{
public:
    int a;
    base()
    {
        a=b=c=0;
        cout<<"\n Inside Default Constructor";
    }
    base(int m,int n)
    {
        b=m;
        c=n;
        cout<<"\n Inside Parameter Constructor";
    }
    void fun()
    {
        cout<<"\n Inside fun()";
    }
    ~base()
    {
        cout<<"\n Inside destructor";
    }
private:
    int b;
    void gun()
    {
        cout<<"\n Inside gun()";
protected:
    int c;
    void run()
    {
        cout<<"\n Inside run()";
    }
};
class base2
{
public:
    int p;
    base2()
    {
        p=q=r=0;
        cout<<"\n Inside Default Constructor";
    }
    base2(int m,int n)
    {
        q=m;
        r=n;
        cout<<"\n Inside Parameter Constructor";
    }
    void sun()
    {
        cout<<"\n Inside sun()";
    }
    ~base2()
    {
        cout<<"\n Inside destructor";
    }
private:
    int q;
    void nun()
    {
        cout<<"\n Inside nun()";
protected:
    int r;
    void mun()
    {
        cout<<"\n Inside mun()";
    }
};
class base2 :: public base1 ,base
{
public:
    int x;
    base2()
    {
        x=y=z=0;
        cout<<"\n Inside Default Constructor";
    }
    base2(int m,int n)
    {
        y=m;
        z=n;
        cout<<"\n Inside Parameter Constructor";
    }
    void tun()
    {
        cout<<"\n Inside tun()";
    }
    ~base2()
    {
        cout<<"\n Inside destructor";
    }
private:
    int y;
    void bun()
    {
        cout<<"\n Inside bun()";
protected:
    int z;
    void dun()
    {
        cout<<"\n Inside dun()";
    }
};
int main()
{
    base2 obj;
    obj.sun();
    base2(5,6);

    getch();
    return 0;
}
