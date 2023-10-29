#include <iostream>
using namespace std;
int main()
{
    int t,n;
    cout<<"Enter no of inputs given by user ";
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cout<<"Enter number ";
        cin>>n;
        for(int j=2; j<n; j++)
        {
            if(n%j==0) {cout<<"The number is not prime\n"; break;}
            else if(n%j!=0 && j==n-1) {cout<<"The number is Prime \n";}
        }
        if(n==1 || n==0)
        {cout<<"The number is not prime\n";}
    }
    return 0;
}
