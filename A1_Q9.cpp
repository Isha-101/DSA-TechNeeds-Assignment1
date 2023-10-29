#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter first number ";
    cin>>a;
    cout<<"Enter second number ";
    cin>>b; 
    int maxi=max(a,b);
    int mini=min(a,b);
    
    //finding LCM
    for(int i=maxi; ; i++){
        if(i%mini==0 && i%maxi==0){
            cout<<"LCM="<<i<<endl;
            break;
        }
    }
    //finding HCF
    for(int i=mini; i>=1; i--)
    {
        if(mini%i==0 && maxi%i==0)
        {
            cout<<"HCF="<<i<<endl;
            break;
        }
    }
    return 0;
}
