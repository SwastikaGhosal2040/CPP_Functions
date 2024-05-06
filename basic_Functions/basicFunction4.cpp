//Whenever same code is running for multiple times we can see 3 star triangle should be printed for that 1 outer loop should run for 3 times....inside that loop the loop for the pattern should be printed...inside that outer loop we should take the input of 1 variable....and in the inner loop the number of row will be printed upto that variable which is taken input...if we run the code 3 star triangle will be printed but before the triangle the number should be printed...

#include<iostream>
using namespace std;
int main()
{
    int a;

    for(int k=1;k<=3;k++)
    {
        cin>>a;

        for(int i=1;i<=a;i++)
        {
            for(int j=1;j<=i;j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    }
}