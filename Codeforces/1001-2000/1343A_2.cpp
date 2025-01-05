#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        long long int n;
        cin >> n;

        long long int y = 3;
        while(1){
            if( n % y == 0){
                cout << n / y << '\n';
                break;
            }
            y = y * 2 + 1;
        }
    }

}