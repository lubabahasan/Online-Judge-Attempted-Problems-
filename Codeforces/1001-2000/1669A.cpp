#include<iostream>
using namespace std;
#define nl '\n'

int main(){
    int t; cin>>t;
    int div;
    while(t--){
        int n; cin>>n;
        if(n<=1399) div=4;
        else if(n>=1400 && n<=1599) div=3;
        else if(n>=1600 && n<=1899) div=2;
        else div=1;

        cout<<"Division "<<div<<nl;
    }
    
}