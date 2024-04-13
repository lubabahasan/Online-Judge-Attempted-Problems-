#include <bits/stdc++.h>

using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

#define endl '\n'

#define ll long long

int main(){

	optimize();

	int t;

	cin>>t;

	while(t--){

		int n,z=0,o=0;

		cin>>n;

		char c[n+1];

		for(int i=0;i<n;i++){

			cin>>c[i];

			}

		if(n==1 && c[0]!='0') cout<<"NO"<<endl;

		else if(n==1 && c[0]=='0') cout<<"YES"<<endl;

		else{

			for(int i=0;i<n;i+=2){

				if(c[i]==c[i+1]){

					if(c[i]=='1') o+=3;

					else{

						z+=2;

						o++;

						}

					}

				else{

					o++;

					z+=2;

					}

				}

			if(z>o) cout<<"YES"<<endl;

			else cout<<"NO"<<endl;

		}

}

	return 0;

}
