#include<bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve(){
    long long int n, ans=1;
    cin >> n;

    for(int i=0; i<n; i++){
        ans = (ans * 2)%(1000000007);
    }

    cout << ans ;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}