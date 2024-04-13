//Lubaba Hasan UAP
#define nl '\n'
#define mx 10001
#include<bits/stdc++.h>
using namespace std;

void solve();

int main(){
    int t;
    cin>>t;

    while(t--){
        solve();
    }
}

void solve(){
    string line[8];

    for(int i=0; i<8; i++)
        cin>>line[i];


    for(int i=1; i<7; i++){
        for(int j=1; j<7; j++){
            //cout<<line[i-1][j-1]<<" "<<line[i-1][j+1]<<nl<<" "<<line[i][j]<<nl<<line[i+1][j-1]<<" "<<line[i+1][j+1]<<nl;
            if(line[i-1][j-1]=='#' && line[i-1][j+1]=='#' && line[i+1][j-1]=='#' && line[i+1][j+1]=='#'){
                cout<<i+1<<" "<<j+1<<nl;
                break;
            }
        }
    }

}
