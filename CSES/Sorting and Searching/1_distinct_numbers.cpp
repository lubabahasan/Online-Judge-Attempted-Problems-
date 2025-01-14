#include<bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve(){
    int n;
    cin >> n;

    set<long long int> s;
    long long int temp;

    for( int i = 0; i < n; i++){
        cin >> temp;
        s.insert(temp);
    }

    cout << s.size() << nl;
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