//Lubaba Hasan UAP
#define nl '\n'
#include<bits/stdc++.h>
using namespace std;

void solve();

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}

void solve(){
    string word; cin>>word;
    if(word.find("it") != word.npos)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
