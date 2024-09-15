#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve(int n) {
    while(n--){
        int x; cin>>x;
        char arr[5] = {'a', 'e', 'i', 'o', 'u'};

        string ans = "";

        for(int i=0; i<x; i++){
            ans += arr[i%5];
        }

        sort(ans.begin(), ans.end());
        cout<<ans;
        cout<<nl;
    }
}

int main() {
   int n; cin>>n;
   solve(n);
}