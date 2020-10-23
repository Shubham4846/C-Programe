#include<iostream>
#include<conio.h>
using namespace std;
int Add(int N1,int N2=10)
{
    int Res=0;
    Res=N1+N2;
    return Res;
}
int main()
{
    int No1=0,No2=0,sum=0;
    cout<<"Enter The Two Number"<<endl;
    cin>>No1>>No2;
    sum=Add(No1,No2);
    cout<<"Addition is="<<sum<<endl;
    sum=Add(70);
    cout<<"Addition is="<<sum<<endl;
    getch();
    return 0;
}
