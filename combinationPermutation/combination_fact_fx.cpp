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
    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n-r);
}
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int r;
    cout<<"Enter r : ";
    cin>>r;
    int ncr = fact(n)/(fact(r) * fact(n-r));
    cout<<n<<"C"<<r<<" : "<<ncr;
    

}