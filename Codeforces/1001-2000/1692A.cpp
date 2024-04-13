//Lubaba Hasan UAP
#define nl '\n'
#include<bits/stdc++.h>
using namespace std;

void solve();

int main(){
    int t;
    cin>>t;

    while(t--)
        solve();
}

void solve(){
    int timur, other, front=0;
    cin>>timur;

    int c=3;
    while(c--){
        cin>>other;
        if(other>timur)
            front++;
    }

    cout<<front<<nl;
}
