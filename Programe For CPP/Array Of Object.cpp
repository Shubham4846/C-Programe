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
        cout<<"Enter The Two Number";
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
    int i=0;
    ABC oArr[5];
    cout<<"\n Accepting Value For Array Objects";
    for(i=0;i<5;i++)
    {
      oArr[i].accept();
    }

    cout<<"\n Displaying Info For Given Array Objects";
    for(i=0;i<5;i++)
    {
       oArr[i].display();
    }
    cout<<"\n Thanks";
    getch();
    return 0;
}
