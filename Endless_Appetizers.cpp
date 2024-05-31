//  Creator: Sayan Dev Nath
//  Created: 2024-03-26   12:56:19
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int x, y, r; cin >> x >> y >> r;
        r = r/30;
        x += r;
        cout << ceil(x/(y*1.0)) << '\n';
    }

    return 0;
}