#include <iostream>
using namespace std;
int main()
{
    int low, high;
    cout<<"Enter lower bound of range ";
    cin>>low;
    cout<<"Enter upper bound of range ";
    cin>>high;
    if(low>high) { int l=high; int h=low;}
    int l=low;
    int h=high;
    cout<<"Prime numbers btw given range are\n ";
    for(int i=l; i<=h; i++)
    {
        for(int j=2; j<i; j++)
        {
            if(i%j==0)
              {break;}
            else if(i%j!=0 && j==(i-1))
              {cout<<i<<endl;}
        }
    }
 return 0;
}
