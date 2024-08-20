//Lubaba Hasan UAP
#define nl '\n'
#include<bits/stdc++.h>
using namespace std;

void solve();

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}

void solve(){
    int n, a, b;
    cin>>n>>a>>b;

    if(n%2){
        cout<<min(a*n, ((n/2)*b)+a)<<nl;
    } else
        cout<<min(a*n, ((n/2)*b))<<nl;

}
