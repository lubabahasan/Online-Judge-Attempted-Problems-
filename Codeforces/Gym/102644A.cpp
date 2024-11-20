#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long ll;

int main(){
    ll n; cin>>n;
    double p;  cin>>p;

    double result = 1;
    while(n){
        if(n%2==1) result = result * (1-p) + (1-result) * p;
        p = p * (1-p) + (1-p) * p;
        n = n/2;
    }

    cout<<fixed<<setprecision(10)<<result<<nl;
}