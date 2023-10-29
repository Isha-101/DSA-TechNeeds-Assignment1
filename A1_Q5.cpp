#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter number ";
    cin>>n;
    for(i=0; n>0; i++)
    {
      n=n/10;
    }
    cout<<"Number of digits are "<<i;
  return 0;
}
