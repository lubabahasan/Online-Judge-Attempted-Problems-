//Lubaba Hasan UAP
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){

        int n, q;
        cin >> n >> q;

        long long arr[n+1], num;

        arr[0] = 0;

        for( int i = 1; i <= n; i++){
            cin >> num;
            arr[i] = arr[i-1] + num;
        }

        for( int i = 0; i < q; i++){
            long long l, r, k;
            cin >> l >> r >> k;

            long long sum = arr[n] - arr[r] + arr[l-1];
            long long new_sum = (r-l+1)*k;

            if( (sum%2 == 1 && new_sum%2 == 1) || (sum%2 == 0 && new_sum%2 == 0) )
                cout << "NO\n";
            else
                cout << "YES\n";

        }


    }
}


