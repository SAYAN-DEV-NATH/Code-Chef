//  Creator: Sayan Dev Nath
//  Created: 2024-03-26   21:53:56
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int r, o, c;
    cin >> r >> o >> c;
    if(c > r) cout << "YES\n";
    else
    {
        o = 20 - o;
        r = r - c;
        ((o*6*6) > r)? cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}