#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve(int n) {
    while(n--){
        string s; cin>>s;
        string t = "codeforces";
        int cnt = 0;

        for(int i=0; i<s.length(); i++){
            if(s[i]!=t[i]){
                cnt++;
            }
        }
        
        cout<<cnt<<nl;
    }
}

int main() {
   int n; cin>>n;
   solve(n);
}