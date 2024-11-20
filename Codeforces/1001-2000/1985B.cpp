#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    long long max = 0;
    int max_x;

    for(int x=2; x<=n; x++){
        int sum = 0;
        int j = 1;

        while( j*x <= n){
            sum += j*x;
            j++;
        }

        if(sum > max){
            max = sum;
            max_x = x;
        }
    }

    cout << max_x << '\n';

}

int main(){
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}