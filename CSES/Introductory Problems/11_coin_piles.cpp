#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve(){
    long long int a, b;
    cin >> a >> b;

    if( a < b)
        swap(a, b); // keep max in a

    if((a + b) % 3 == 0 && a <= 2*b){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
}