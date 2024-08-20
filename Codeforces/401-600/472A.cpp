#include<iostream>
using namespace std;
#define nl '\n'

int checkPrime(int n){
    if (n==1) return 0;
    if (n==2) return 1;
    for(int i=2; i*i<=n; i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int main(){
    int num; cin>>num;
    int a = 4;
    while(a<=num/2){
        int b = num-a;
        if(!checkPrime(a) && !checkPrime(b)){
            cout<<a<<" "<<b<<nl;
            return 0;
        }
        a++;
    }
    
}