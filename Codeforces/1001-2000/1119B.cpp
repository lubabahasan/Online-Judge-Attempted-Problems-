//Lubaba Hasan UAP
#define nl '\n'
#define mx 3000000
#include<bits/stdc++.h>
using namespace std;

long int house_colour[mx];

void solve();

int main(){
    solve();
}

void solve(){
    long int n;
    cin>>n;

    vector<long int>vec;

    cin>>house_colour[0];
    vec.push_back(0);

    for(long int i=1; i<n; i++){
        cin>>house_colour[i];
        if(house_colour[i]!=house_colour[i-1] || i==n-1){
            vec.push_back(i);
        }
    }

    long int max_dist = 0;


    for (auto it=vec.rbegin(); it!=vec.rend(); it++){
        if(house_colour[*vec.begin()] != house_colour[*it] && *it-*vec.begin()>max_dist){
            max_dist = *it-*vec.begin();
        }
    }

    for (auto it=vec.begin(); it!=vec.end(); it++){
        if(house_colour[vec[vec.size()-1]] != house_colour[*it] && vec[vec.size()-1]-*it>max_dist){
            max_dist = vec[vec.size()-1]-*it;
        }
    }

    cout<<max_dist<<nl;
}
