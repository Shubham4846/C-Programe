#include<iostream>
#include<conio.h>

using namespace std;

class ABC
{
public:
    int N1,N2;
    ABC()
    {
     N1=N2=0;
     cout<<"Default Constructor"<<endl;
    }
    ABC(int a,int b)
    {
        N1=a;
        N2=b;
        cout<<"Parameter Constructor"<<endl;
    }
    void accept()
    {
        cout<<"\n Enter The Two Number";
        cin>>N1>>N2;
    }
    ~ABC()
    {
        cout<<"\n Inside Destructor";
    }
    void display()
    {
        cout<<"\n Value Of No1="<<N1;
        cout<<"\n Value Of No2="<<N2;
    }
};
int main()
{
    ABC obj1;
    ABC obj2(11,12);
    cout<<"\n disply the value";
    obj1.display();
    obj2.display();
    cout<<"\n accept the value";
    obj1.accept();
    obj1.accept();
    cout<<"\n pratik patil";
    getch();
    return 0;
}
