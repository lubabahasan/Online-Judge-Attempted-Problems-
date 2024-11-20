#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve(int t) {
    while(t--){
        
        int n, k; cin>>n>>k;
        int b[k] = {0};

        for(int i=0; i<k; i++){
            int tmpb, tmpc;
            cin>>tmpb>>tmpc;
            
            b[tmpb-1] += tmpc;
        }

        sort(b, b+k, greater<int>());
        int sum = 0;

        n = min(n, k);
        for(int i=0; i<n; i++){
            sum += b[i];
        }

        cout<<sum<<nl;

    }
}

int main() {
   int t; cin>>t;
   solve(t);
}