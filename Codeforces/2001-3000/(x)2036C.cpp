#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

int check1100(string s){
    int n = s.length();
    for(int i=0; i<=n-4; i++){
        if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='0')
            return 1;
    }
    return 0;
}

void solve(int t) {
    while(t--){
        
        string s; cin>>s;
        int q; cin>>q;
        
        int qn;
        char v;
        while(q--){
            cin>>qn>>v;
            s[qn-1] = v;

            if(s.find("1100")!=string::npos)
                cout<<"YES"<<nl;
            else
                cout<<"NO"<<nl;
        }
    }
}

int main() {
   int t; cin>>t;
   solve(t);
}