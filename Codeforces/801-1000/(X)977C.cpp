#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;

    long long int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a+n);

    if((k==0 && a[0]==1) || (a[k-1] == a[k]) ){
        cout << -1;
    } else {
        if(k == 0){
            cout << 1;
        } else {
            cout << a[k-1];
        }
    }
}