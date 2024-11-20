#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve(int n) {
    while(n--){
        int t; cin>>t;
        int arr[t];
        for(int i=0; i<t; i++) cin>>arr[i];

        int flag = 1;
        while(flag){
            for(int i=0; i<t-1; i++){
                if(abs(arr[i]-arr[i+1])!=5 && abs(arr[i]-arr[i+1])!=7 && flag){
                    cout<<"NO"<<nl;
                    flag = 0;
                }
            }
            break;
        }
        if(flag) cout<<"YES"<<nl;
    }
}

int main() {
   int n; cin>>n;
   solve(n);
}