#include<bits/stdc++.h>
#include<ctype.h>
using namespace std;
#define nl '\n'

int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    string s;
    cin >> s;
    
    int n =  s.length();

    string new_s = "";

    for(int i = 0; i < n; i++){
        s[i] = tolower(s[i]);
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y'){
            new_s += '.';
            new_s += s[i];
        }
    }

    cout << new_s;
}