#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve(int t) {
    while(t--){
        
        string s; cin>>s;
        int q; cin>>q;

        int n = s.length();
        set<int> indexes;

        for(int i=0; i<=n-4; i++){
            if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='0')
                indexes.insert(i);
        }

        while(q--){
            int qn;
            char v;
            cin>>qn>>v;

            s[qn-1] = v;

            for(int j=0; j<4; j++){
                if(indexes.count(qn-j-1))
                    indexes.erase(qn-j-1);
            }

            if(indexes.size())
                cout<<"YES"<<nl;
            else{
                indexes.clear();
                for(int i=0; i<=n-4; i++){
                    if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='0')
                        indexes.insert(i);
                }

                if(indexes.size())
                    cout<<"YES"<<nl;
                else
                    cout<<"NO"<<nl;
            }  
        }
    }
}

int main() {
   int t; cin>>t;
   solve(t);
}