#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define for(s,n,m) for(long int i=s; i<n; i+=m)

void solve(int n) {
    while(n--){
        int x; cin>>x;
        long int arr[x];
        
        for(0,x,1) cin>>arr[i];

        sort(arr, arr+x);

        int ans = 0;
        for(1,x,1) if(arr[i]>arr[0]) ans += arr[i]-arr[0];

        cout<<ans<<nl;
    }
}

int main() {
   int n; cin>>n;
   solve(n);
}