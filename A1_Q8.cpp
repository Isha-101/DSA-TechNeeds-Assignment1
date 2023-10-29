#include<iostream>
using namespace std;
int main()
{
    int n,k,j=1;
    cout<<"Enter number ";
    cin>>n;
    cout<<"Enter number of digits to be rotated ";
    cin>>k;
    for(int i=1; i<=k; i++){
        j=10*j;
    }
    cout<<n%j<<n/j;
    return 0;
}
