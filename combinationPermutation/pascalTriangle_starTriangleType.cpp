#include<iostream>
using namespace std;
int fact(int x)
{
    int f = 1;
    for(int i=2;i<=x;i++)
    {
        f *= i;
    }
    return f;
}

int combination(int n, int r)
{
    int ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
int main()
{
    //no of lines of the Pascal Triangle is 1 unit greater than the input taken(n)
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    //1st I have to print Pascal triangle like star triangle
    for(int i=0; i<=n; i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<combination(i,j)<<" ";//icj
        }
        cout<<endl;
    }

}