//  Creator: Sayan Dev Nath
//  Created: 2024-03-31   09:01:23
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t; while(t--) {
        ll x; cin >> x;
        string s; cin >> s;
        int cnt_c=0, cnt_n=0;
        for(char &c:s) {
            if(c=='C') cnt_c += 2;
            else if(c=='N') cnt_n += 2;
            else cnt_c += 1, cnt_n += 1;
        }
        if(cnt_c==cnt_n) cout << x*55 << '\n';
        else if(cnt_c>cnt_n) cout << x*60 << '\n';
        else cout << x*40 << '\n';
    }

    return 0;
}