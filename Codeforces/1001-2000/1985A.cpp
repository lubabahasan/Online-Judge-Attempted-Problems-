#include<bits/stdc++.h>
using namespace std;

void solve(){
    string a, b;
    cin >> a >> b;

    swap(a[0], b[0]);

    cout << a << " " << b << '\n';
}

int main(){
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}