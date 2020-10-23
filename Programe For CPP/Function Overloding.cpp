#include<iostream>
#include<conio.h>

using namespace std;

class base
{
public:
    int N1;
    base();
    base(int a,int b,int c);
    void EMI(int mlt)
    {
        int res=0;
        res=(N1+N2+N3)*mlt;
        cout<<"EMI For Given Customer="<<res;
    }
    int EMI(float f)
    {
        int res=0;
        res=(N1+N2)-(f);
        return res;
    }
private:
    int N2;
protected:
    int N3;
};
     base::base()
     {
        N1=N2=N3=0;
     }
     base::base(int a,int b,int c)
     {
         N1=a;
         N2=b;
         N3=c;
     }
     int main()
     {
         base bobj1;
         base bobj2(12,13,11);
         bobj1.EMI(25);
         bobj2.EMI(10);

         cout<<"\n EMI For Cust1="<<bobj1.EMI(3.14);
         cout<<"\n EMI For Cust2="<<bobj2.EMI(7.12);
         getch();
         return 0;
     }
