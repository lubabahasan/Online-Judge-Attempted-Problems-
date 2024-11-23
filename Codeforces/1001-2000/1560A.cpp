#include<bits/stdc++.h>
using namespace std;
#define nl '\n'

int checkThree(int k){
    if(k==1) return 1;
    if(k==2) return 2;
    int num=4, i=3;
    for(i=0; i<k; num++){
        if(num%3!=0 && num%10!=3){
            i++;
        }
    }
    return num;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t,k;
    cin>>t;

    int goodNums[1001];

    for(int i=1, k=1; k<=1000; i++){
        if(i%3!=0 && i%10!=3){
            goodNums[k-1] = i;
            k++;
        }
    }

    while(t--){
        cin >> k;
        cout << goodNums[k-1] << nl;
    }
}