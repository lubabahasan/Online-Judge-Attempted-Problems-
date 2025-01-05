#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long int n;
    cin >> n;

    while( n != 1){
        cout << n << " ";
        if(n%2 == 0){
            n /= 2;
        } else {
            n *= 3;
            n += 1;
        }
    }

    cout << 1 ;
    
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