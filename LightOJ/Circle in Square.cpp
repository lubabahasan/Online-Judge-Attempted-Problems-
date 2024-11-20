#include <bits/stdc++.h>
using namespace std;


int main() {
    
    int t; cin>>t;
    double r; 
    double pi = 2 * acos (0.0);
    
    int i = 1;
    while(i<=t){
        cin>>r;
        
        cout<<"Case "<<i<<": ";
        cout<<fixed<<setprecision(2)<<(4*r*r)-(r*r*pi)<<'\n';
        
        i++;
    }
    return 0;
}
