#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter your Marks ";
    cin>>marks;
    if(marks>90)
      cout<<"Excellent \n";
    else if(marks>80)
      cout<<"Good \n";
    else if(marks>70)
      cout<<"Fair \n";
    else if(marks>60)
      cout<<"Meets expectations \n";
    else
      cout<<"Below par \n";
    return 0;
}
