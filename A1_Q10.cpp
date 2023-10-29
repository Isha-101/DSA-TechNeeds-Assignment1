#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter number ";
    cin>>n;
    cout<<"Prime factorization of entered number: \n";
    for(i=2; i<=n; i++){
        while(n%i==0){ 
            cout<<i<<endl;
            n=n/i;
        }
    }
    return 0;
}
