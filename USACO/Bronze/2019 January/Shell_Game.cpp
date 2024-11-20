#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long ll;

int main(){
    ifstream cin("shell.in");

    int n;
    cin>>n;
    int abg[n][3];

    for(int i=0; i<n; i++)
        for(int j=0; j<3; j++)
            cin>>abg[i][j];

    int shell, point=0, temp;
    for(int i=1; i<=3; i++){
        shell = i, temp = 0;
        for(int j=0; j<n; j++){
            if(shell==abg[j][0])
                shell = abg[j][1];
            else if(shell==abg[j][1])
                shell = abg[j][0];
            
            if(shell==abg[j][2])
                temp++;
        }
        if (temp>point) point = temp;
    }
    
    cout<<point<<nl;
    cin.close();

    ofstream fout("shell.out");
    fout<<point<<nl;
    fout.close();

    return 0;
}