#include <bits/stdc++.h>
#define nl '\n'
using namespace std;

void solve();

int main() {

    int n;
    cin>>n;
    
    for (int i=0; i<n; i++){
        solve();
    }

    return 0;
}

void solve() {
    int a, b, c;
    cin>>a>>b>>c;
    
    cout<< a+b+c - min(a, min(b, c)) - max(a, max(b, c)) << nl;
}