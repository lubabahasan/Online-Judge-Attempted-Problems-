#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long ll;

int main(){
    ll h, w;
    cin>>h>>w;
    char a[h+1][w+1];
    ll dp[h+1][w+1];

    memset(dp, 0, sizeof(dp));

    for(ll i=1; i<=h; i++){
        for(ll j=1; j<=w; j++){
            cin>>a[i][j];
            if(a[i][j] == '#') dp[i][j] = 0;
            else dp[i][j] = 1;
        }
    }

    for(ll i=1; i<=h; i++){
        for(ll j=1; j<=w; j++){
            if(a[i][j] == '.'){
                if (i==1 && j==1) continue;
                dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % (1000000007);
            }
        }
    }

    cout<<dp[h][w]<<nl;
}
