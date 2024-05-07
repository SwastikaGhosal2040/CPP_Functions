#include<iostream>
using namespace std;
void starTriangle(int x)//using argument
{
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=i;j++)
        {
           cout<<"*"; 
        }
        cout<<endl;
    }
}

int main()
{
    starTriangle(3);
    cout<<"Hello World"<<endl;
    starTriangle(4);
    cout<<"Hello"<<endl;
    starTriangle(5);
    cout<<"Hello PW";
}