#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter your Marks ";
    cin>>m;
    if(m>90)
      cout<<"Excellent \n";
    else if(m>80)
      cout<<"Good \n";
    else if(m>70)
      cout<<"Fair \n";
    else if(m>60)
      cout<<"Meets expectations \n";
    else
      cout<<"Below par \n";
    return 0;
}
