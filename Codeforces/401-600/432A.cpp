#include<bits/stdc++.h>
using namespace std;
#define nl '\n'

int main(){
    int n, k;
    cin>>n>>k;
    int t = n;
    int c = 0;

    int contestents[n];

    while(t--){
        cin>>contestents[t];
    }

    sort(contestents, contestents+n);

    n -= n%3;

    for(int i = 0; i<n; i += 3){
        if(contestents[i]+k>=6 || contestents[i+1]+k>=6 || contestents[i+2]+k>=6){
            break;
        } else {
            c++;
        }
    }
    
    cout<<c<<nl;
}