#include <iostream>
using namespace std;
int main()
{
    int l,h;
    cout<<"Enter lower bound of range ";
    cin>>l;
    cout<<"Enter upper bound of range ";
    cin>>h;
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
