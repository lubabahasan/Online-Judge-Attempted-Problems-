#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve(int n) {
    while(n--){
        int a, b;
        cin>>a>>b;

        if (a%2!=0) cout<<"NO\n";
        else if(b%2==0) cout<<"YES\n";
        else{
            b = b%2;
            if(b*2 <= a) cout<<"YES\n";
            else cout<<"NO\n";
        }
            
        //cout <<a<<" "<<b<<nl;
       
    }
}

int main() {
   int n; cin>>n;
   solve(n);
}