#include<bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve(){
    long int n;
    cin >> n;
    
    here:
    if(n%33 == 0){
        cout << "YES" << nl;
    } else {
        if( n < 33 ){
            cout << "NO" << nl;
        } else {
            string a = to_string(n);
            for(int i=0; i<a.length()-1; i++){
                if(a.substr(i,2) == "33"){
                    a = a.substr(0,i) + a.substr(i+2);
                    n = stol(a);
                    goto here;
                }
            }
            cout << "NO" << nl;
        }
    }

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t=1;
    cin >> t;
    while(t--){
        solve();
    }
}