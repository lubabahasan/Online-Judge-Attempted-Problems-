#include<bits/stdc++.h>
using namespace std;
#define nl '\n'

int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    int n;
    cin >> n;
 
    vector<int> coins;

    for(int i = 0 ; i < n; i++){
        int x;
        cin >> x;
        coins.push_back(x);
    }

    sort(coins.begin(), coins.end());

    for(int i = 1 ; i < n; i++){
        coins[i] += coins[i-1];
    }

    for(int i = n-2; i >= 0; i--){
        int me = coins[n-1] - coins[i];
        int twin = coins[i];

        if(me > twin){
            cout << n - ( i + 1 )<< nl;
            return 0;
        }
    }

    cout << n << nl;

}