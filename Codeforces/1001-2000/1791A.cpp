//Lubaba Hasan
#include<iostream>
using namespace std;

string word = "codeforces";

int main(){
    int t; cin>>t;
    while(t--){
        char letter; cin>>letter;
        int i = word.length();
        string verdict = "no";
        for(int j=0; j<i; j++){
            if(word[j]==letter){
                verdict = "yes";
                break;
            }
        }
        cout<<verdict<<'\n';
    }
}