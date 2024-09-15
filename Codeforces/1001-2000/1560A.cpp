#include<bits/stdc++.h>
using namespace std;
#define nl '\n'

int checkThree(int k){
    if(k==1) return 1;
    if(k==2) return 2;
    int num=4, i=3;
    for(i=0; i<k; num++){
        if(num%3!=0 && num%10!=3){
            i++;
        }
    }
    return num;
}

int main(){
    int t,k;
    cin>>t;

    while(t--){
        cin>>k;
        cout<<checkThree(k)<<nl;
    }
}