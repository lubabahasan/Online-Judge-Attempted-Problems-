#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve(int n) {
    while(n--){
        long long x, y, d;
        cin>>x>>y>>d;

        x=ceil(double(x)/d);
        y=ceil(double(y)/d);

        if(x>y) cout<<(x*2)-1<<nl;
        else cout<<(y*2)<<nl;
    }
}

int main() {
   int n; cin>>n;
   solve(n);
}