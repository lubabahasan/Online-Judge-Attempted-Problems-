#include<bits/stdc++.h>
using namespace std;
#define nl '\n'

int grp[5];

void solve(){
    
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i = 0; i < n; i++){
        
        cin >> arr[i];
        grp[arr[i]]++;
    }
    
    int tot = grp[4];
    
    tot += grp[3];
    
    grp[1] -= min(grp[3], grp[1]);    
    grp[2] += grp[1]/2;
    grp[1] %= 2;
        
    tot += grp[2]/2;
    grp[2] %= 2;
 
    if(grp[2] || grp[1])
        tot++;
    
    cout << tot << nl;  
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //cin>>t;
    while(t--)
        solve();
}