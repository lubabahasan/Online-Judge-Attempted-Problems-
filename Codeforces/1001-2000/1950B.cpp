//Lubaba Hasan UAP
#define nl '\n'
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0; i<n; i++){
            for(int m=0; m<2; m++){
                for(int j=0; j<n; j++){
                    if(i%2==0){
                        if(j%2) cout<<"..";
                        else cout<<"##";
                    } else {
                        if(j%2) cout<<"##";
                        else cout<<"..";
                    }
                }
                cout<<nl;
            }
        }
    }
}
