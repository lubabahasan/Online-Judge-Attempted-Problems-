#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve(int n) {
    while(n--){
        int x; cin>>x;
        cout<< x%10 + (x/10)%10 << nl;
    }
}


int main() {
   int n; cin>>n;
   solve(n);
}