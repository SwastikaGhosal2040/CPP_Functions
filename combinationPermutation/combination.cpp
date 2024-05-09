#include<iostream>
using namespace std;
int main()
{
    int n,r;
    cout<<"enter n: ";
    cin>>n;
    cout<<"enter r: ";
    cin>>r;
    //fact code:
    //nCr = n! / r! * (n-r)!  [formula]
    /*
    n! = nfact
    r! = rfact
    (n-r)! = nrfact
    */
   //n! code:
   int nfact = 1;
   for(int i=2;i<=n;i++)
   {
     nfact *= i;
   }
   //r! code:
   int rfact = 1;
   for(int i=2;i<=r;i++)
   {
     rfact *= i;
   }
   //(n-r)! code:
   int nrfact = 1;
   for(int i=2;i<=n-r;i++)
   {
     nrfact *= i;
   }
   int nCr = nfact / (rfact * nrfact);
   cout<<n<<"C"<<r<<" :"<<nCr;

}