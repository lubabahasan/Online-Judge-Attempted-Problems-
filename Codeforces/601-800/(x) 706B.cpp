#include <bits/stdc++.h>
using namespace std;
#define nl '\n';


void solve(){
    int n;
    cin >> n;
    
    int prices[n];
    
    for( int i = 0; i < n; i++ ){
      cin >> prices[i];
    }
    
    //O(n*log n)
    sort( prices, prices + n);
    
    int q, flag = 0;
    cin >> q;
    
    //O(q*n)
    while(q--){
      long long temp;
      cin >> temp;
      
      int i;
      
      for( i = 0; i < n; i++ ){
        if(prices[i] > temp){
          cout << i << nl;
          flag = 1;
          break;
        }
      }
      
      if(!flag){
        cout << i << nl;
      } else {
        flag = 0;
      }
    }
  
}


int32_t main() {
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t = 1;
  //cin >> t;
  
  while(t--) {
    solve();
  }
  return 0;
}
