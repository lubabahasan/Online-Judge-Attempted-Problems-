#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve(int n) {
    while(n--){
        int a, b; cin>>a>>b;

        int val = INT_MAX;

        for( int i=a; i<=b; i++){
            int new_val = (i-a)+(b-i);
            val = min(val, new_val);
        }

        cout<<val<<nl;
    }
}

int main() {
   int n; cin>>n;
   solve(n);
}