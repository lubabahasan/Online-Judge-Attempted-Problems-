#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    for(int m=1; m<=t; m++){
        int team[3];
        
        cin>>team[0]>>team[1]>>team[2];
        int win[3];
        int loss[3];
        int draw[3];
        
        int twin=0, tdraw=0, tloss=0;
        
        for(int i=0; i<3; i++){
            win[i] = team[i]/3;
            twin += win[i];
            team[i] %= 3;
            draw[i] = team[i];
            tdraw += draw[i];
            loss[i] = 2 - win[i] - draw[i];
            tloss += loss[i];
        }
        
        cout<<"Case "<<m<<": ";
        
        if(twin>3 || tloss>3 || twin!=tloss || twin+tloss+tdraw != 6)
            cout<<"invalidum\n";
        else
            cout<<"perfectus\n";
        
    }
}
