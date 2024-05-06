#include<iostream>
using namespace std;
void starTriangle()//without using arguments
{
    for(int i=1;i<=3;i++)
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
    starTriangle();
}