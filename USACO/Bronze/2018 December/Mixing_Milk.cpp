#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long ll;

int main(){
    ifstream cin("mixmilk.in");

    int b[3];
    int m[3];
    
    for(int i=0; i<3; i++)
        cin>>b[i]>>m[i];

    for(int i=1; i<=100; i++){
        int temp = m[i%3];  
        m[i%3] = min(m[(i-1)%3]+m[i%3], b[i%3]);
        m[(i-1)%3] = max((temp+m[(i-1)%3]-b[i%3]), 0);
    }

    cin.close();

    ofstream fout("mixmilk.out");

    fout<<m[0]<<nl<<m[1]<<nl<<m[2]<<nl;
    fout.close();

    return 0;
}