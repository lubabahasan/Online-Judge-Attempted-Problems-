#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long ll;

int main(){
    int h, w, n;
    cin>>h>>w>>n;

    ll dp[h][w];

    int tmp1, tmp2;

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            dp[i][j] = 1;
        }
    }
    
    for(int i=0; i<n; i++){
        cin>>tmp1>>tmp2;
        dp[tmp1-1][tmp2-1] = 0;

        if(tmp1-1==0)
            for(int j=tmp2; j<w; j++) dp[0][j] = 0;
        if(tmp2-1==0)
            for(int j=tmp1; j<h; j++) dp[j][0] = 0;
    }

    for(ll i=1; i<h; i++){
        for(ll j=1; j<w; j++){
            if(dp[i][j]==1){
                dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % (1000000007);
            }
        }
    }

    cout<<dp[h-1][w-1]<<nl;
}
