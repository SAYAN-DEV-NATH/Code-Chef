//  Creator: Sayan Dev Nath
//  Created: 2024-03-26   23:21:09
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
    {
        int h, x, y; cin >> h >> x >> y;
        h -= y;
        if(h <= 0) cout << "1\n";
        else cout << ceil(h/(x*1.0)) + 1 << '\n';
    }
    return 0;
}