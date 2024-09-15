#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve(int n) {
    while(n--){
        int candies; cin>>candies;
        int temp;
        int one=0, two=0;
        while(candies--){
            cin>>temp;
            if(temp==1) one++;
            else two++;
        }
        
        if (one>0 && one%2==0 ) cout<<"YES"<<nl;
        else if (one==0 && two%2==0) cout<<"YES"<<nl;
        else cout<<"NO"<<nl; 

    }
}

int main() {
   int n; cin>>n;
   solve(n);
}