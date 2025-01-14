#include<bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve(){
    long int n;
    cin >> n;

    if(n == 2 || n == 3){
        cout << "NO SOLUTION";
        return;
    }

    long int x = n, y = n-1;
    
    if(n%2 == 0){
        swap(x, y);
    }

    for(int i = x; i > 0; i-=2){
        cout << i << " ";
    }

    for(int i = y; i > 0; i-=2){
        cout << i << " ";
    }

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}