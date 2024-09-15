#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve(int n) {
    while(n--){

        int x; cin>>x;

        string ans = "";
        
        while(x--){
            string note; cin>>note;

            if(note[0]=='#') ans+="1";
            else if(note[1]=='#') ans+="2";
            else if(note[2]=='#') ans+="3";
            else ans+="4";

            if(x!=0) ans+=" ";
        }

        reverse(ans.begin(), ans.end());

        cout<<ans<<nl;
    }
}

int main() {
   int n; cin>>n;
   solve(n);
}