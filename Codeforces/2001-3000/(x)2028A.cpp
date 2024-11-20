#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve(int t) {
    while(t--){
        int n, a, b;
        cin>>n>>a>>b;

        string s;
        cin>>s;

        int i=0,x=0, y=0;

        while(1){

            if(i==n) i=0;

            if(x==a && y==b){
                cout<<"YES"<<nl;
                break;
            }

            if(s[i]=='N'){
                y++;
            } else if(s[i]=='S'){
                y--;
            } else if(s[i]=='E'){
                x++;
            } else {
                x--;
            }
            i++;

            if(x==a && y==b){
                cout<<"YES"<<nl;
                break;
            }
     
        }
    }
}

int main() {
   int t = 1;
   cin>>t;
   solve(t);
}