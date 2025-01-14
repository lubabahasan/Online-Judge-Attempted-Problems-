#include<bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve(){
    long long int x, y;
    cin >> x >> y;

    if ( x >= y ) {
        if ( x % 2 == 0 )
            // (even x, 1) == x*x (decreases until x=y)
            //             == x*x    -   (y-1)
            cout << x*x - y + 1;
        else 
            // (odd x, 1) == (x-1)*(x-1) + 1 (increases until x=y)
            //            == (x-1)*(x-1) + 1    +   (y-1)
            cout << (x-1)*(x-1) + y;
    } else {
        if ( y % 2 == 0 )
            // (even y, 1) == (y-1)*(y-1) + 1 (increases until x=y)
            //             == (y-1)*(y-1) + 1    +   (x-1)
            cout << (y-1)*(y-1) + x;
        else
            // (odd y, 1) == y*y (decreases until x=y)
            //            == y*y    -   (x-1)
            cout << y*y - x + 1;
    }

    cout << nl;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}