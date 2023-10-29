#include<iostream>
using namespace std;
int main()
{
    int n,i,remd;
    cout<<"Enter number ";
    cin>>n;
    cout<<"Reversed number is ";
    for(i=0; n>0; i++)
    {
      remd=n%10;
      cout<<remd;
      n=n/10;
    }   
  return 0;
}
