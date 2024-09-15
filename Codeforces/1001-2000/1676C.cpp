#include <bits/stdc++.h>
using namespace std;
#define nl '\n'


void solve(int n) {
    while(n--){
        int x, size;
        cin>>x>>size;
        string arr[x];
        for(int i=0; i<x; i+=1) cin>>arr[i];

        int min_diff=INT_MAX;
        for(int i=0; i<x; i+=1){
            for(int j=i+1; j<x; j+=1){
                int diff=0;
                string word1 = arr[i], word2 = arr[j];
                for(int k=0; k<size; k++){
                    diff+=abs(int(word1[k])-int(word2[k]));
                }
                if (diff<min_diff) min_diff = diff;
            }
        }

        cout<<min_diff<<nl;
    }
}

int main() {
   int n; cin>>n;
   solve(n);
}