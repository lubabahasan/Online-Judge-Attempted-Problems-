#include<bits/stdc++.h>
using namespace std;
#define nl '\n';

void solve(){
    int n, a, b;
    cin>>n>>a>>b;

    string s;
    cin>>s;

    int ind = 0;

    int x=0, y=0;

    for(int i=0; i<100; i++){

        if(ind==n) ind=0;

        if(s[ind]=='N'){
            y++;
        } else if(s[ind]=='S'){
            y--;
        } else if(s[ind]=='E'){
            x++;
        } else {
            x--;
        }
        ind++;

        if(x==a && y==b){
            cout<<"YES"<<nl;
            break;
        }
     
    }

    if(x!=a && y!=b){
        cout<<"NO"<<nl;
    }
}

int main(){
    int t = 1;
    cin>>t;
    while(t--)
        solve();
}
