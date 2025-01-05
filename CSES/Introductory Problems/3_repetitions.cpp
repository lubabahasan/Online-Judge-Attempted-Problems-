#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;

    int count = 1, mx_count = 1;
    char prev = s[0], curr;

    for(int i = 1; i < s.length(); i++){
        curr = s[i];
        if(prev == curr){
            count++;
        } else {
            mx_count = max(mx_count, count);
            count = 1;
        }
        prev = curr;
    }

    cout << max(count, mx_count) << '\n';

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