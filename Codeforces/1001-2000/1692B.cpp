//Lubaba Hasan UAP
#define nl '\n'
#define mx 10001
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
    int n;
    cin>>n;

    int num[mx] = {0};
    int a;

    for(int i=0; i<n; i++){
        cin>>a;
        num[a]++;
    }

    int extra = 0, distinct = 0;

    for(int i=1; i<mx; i++){
        if(num[i]!=0){
            extra += num[i]-1;
            distinct++;
        }
    }

    if(extra%2!=0)
        cout<<distinct-1<<nl;
    else
        cout<<distinct<<nl;

}
