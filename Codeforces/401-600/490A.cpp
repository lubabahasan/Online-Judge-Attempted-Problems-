#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int student[4] = {0, 0, 0, 0};

    int min = n;

    while(n--){
        int temp;
        cin >> temp;
        student[temp]++;
    }

    
    for( int i = 1; i < 4; i++){
        if( student[i] < min){
            min = student[i];
        }
    }

    cout << min << '\n';

    if( min != 0){
        
    }

}