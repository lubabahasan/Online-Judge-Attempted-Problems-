#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    priority_queue<long long> pq;
    long long sum[n];

    long long temp;

    int count = 0;

    for( int i = 0; i < n; i++){
        cin >> temp;
        pq.push(temp);
        
        if( i == 0){
            sum[i] = temp;
            if( pq.top() == 0){
                count++;
            }
        }
        else{
            sum[i] = sum[i-1] + temp;
            if( sum[i] - pq.top() == pq.top()){
                count++;
            }
        }
    }

    cout << count << '\n';

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}