//Lubaba Hasan UAP
#define nl '\n'
#include<bits/stdc++.h>
using namespace std;

void solve();

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}

void solve(){
    string time; cin>>time;
    int hour, minute;
    hour = stoi(time.substr(0,2));
    if(hour<1) cout<<"12:"<<time.substr(3,2)<<" AM\n";
    else if(hour>=12){
        if(hour-12==0) cout<<time<<" PM\n";
        else if(hour-12<10 && hour-12) cout<<"0"<<hour-12<<time.substr(2,3)<<" PM\n";
        else cout<<hour-12<<time.substr(2,3)<<" PM\n";
    } else cout<<time<<" AM\n";
}
