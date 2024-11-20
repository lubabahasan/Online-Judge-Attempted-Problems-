#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;

    string arr[n];

    int max = 0, start, smax, rmax;

    for(int i = 0; i < n ; i++){
        cin >> arr[i];
        int c = 0;
        
        for(int j = 0; j < m; j++){
            string temp = arr[i];

            if(temp[j] == '#'){
                if(c == 0){
                    start = j;
                }
                c++;
            } else {
                c = 0;
            }

            if(c > max){
                max = c;
                smax = start;
                rmax = i;
            }
        }
    }

    cout << rmax + 1 << " " << smax + 1 + max/2 << '\n';


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