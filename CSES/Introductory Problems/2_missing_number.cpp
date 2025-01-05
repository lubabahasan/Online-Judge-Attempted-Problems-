#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long int n;
    cin >> n;

    long long int sum = (n*(n+1))/2, temp = 0;
    int x;

    for(int i = 0; i < n-1; i++){
        cin >> x;
        temp += x;
    }

    cout << sum - temp << '\n';

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