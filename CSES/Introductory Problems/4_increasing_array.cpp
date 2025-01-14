#include<bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve(){
    int n;
    cin >> n;

    long long int prev, curr, temp, ans = 0;
    cin >> prev;

    for(int i = 0; i < n-1; i++){
        cin >> curr;
        temp = prev - curr;
        if(temp > 0){
            ans += temp;
        }
        prev = max(prev, curr);
    }

    cout << ans << nl;

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