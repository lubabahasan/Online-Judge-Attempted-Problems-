//Lubaba Hasan UAP
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,z=0,o=0;
		cin>>n;
		string c;
		cin>>c;

		if(n==1 && c[0]!='0')
            cout<<"NO"<<endl;
		else if(n==1 && c[0]=='0')
            cout<<"YES"<<endl;
		else{
			for(int i=0; i<n-1; i++){
				if(c[i]==c[i+1]){
					if(c[i]=='1')
                        o+=2;
					else
						z+=2;
                    i++;
                } else{
					if(c[i]=='1')
                        o++;
					else
						z++;
                }
            }
            cout<<z<<" "<<o<<nl;
			if(z>o) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;

		}

}

	return 0;

}
