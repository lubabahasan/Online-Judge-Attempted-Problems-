#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long ll;

void solve(int n) {
    vector<int> x(n);
    vector<int> y(n);
    for(int i=0; i<n; i++) cin>>x[i];
    for(int i=0; i<n; i++) cin>>y[i];

    ll max = 0, temp;
    for(int i=0; i<n; i++) {
        for(int j=1; j<n; j++) {
            temp = (x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]);
            if(temp>max) max = temp;
        }
    }

    cout<<max<<nl;

}

int main() {
   int n; cin>>n;
   solve(n);
}