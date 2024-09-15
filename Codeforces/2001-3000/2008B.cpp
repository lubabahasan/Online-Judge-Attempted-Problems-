#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

int count(string s, char c){
    int count = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i]==c) count++;
    }
    return count;
}

void solve(int n) {
    while(n--){
        int len; cin>>len;
        string s; cin>>s;

        int one = count(s, '1'), zero = count(s,'0');

        //for sides : side = 4n-4

        if((one+4)%4!=0) cout<<"NO\n";
        else{
            int side = (one+4)/4;
            if( zero+one == side*side) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}

int main() {
   int n; cin>>n;
   solve(n);
}