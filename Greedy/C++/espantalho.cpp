#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;

    cin >> n >> s;

    int ans = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '.'){
            i += 2;
            ans++;
        }
    }

    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;

    for(int i = 1; i <= t; i++){
        cout << "Case " << i << ": ";
        solve();
    }
}