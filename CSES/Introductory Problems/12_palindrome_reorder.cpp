#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

int alpha[26];

void solve(){
    string a;
    cin >> a;

    for (int i = 0; i < a.length(); i++){
        alpha[int(a[i]) - int('A')]++;
    }

    int odd_c = 0;
    string b, ans = "";

    for (int i = 0; i < 26; i++){
        if (alpha[i] % 2 != 0){
            odd_c++;
            if (odd_c > 1){
                cout << "NO SOLUTION\n";
                return;
            }
            b = 'A' + i;
            alpha[i]--;
        }
        alpha[i] /= 2;
    }

    for (int i = 0; i < 26; i++){
        if (alpha[i] > 0){
            for (int j = 0; j < alpha[i]; j++){
                ans += 'A' + i;
            }
        }
    }

    cout << ans << b;

    reverse(ans.begin(), ans.end());

    cout << ans;
}

int main()
{
    // cin.tie(0);
    // ios::sync_with_stdio(false);

    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
}