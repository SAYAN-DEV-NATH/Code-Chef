//  Creator: Sayan Dev Nath
//  Created: 2024-03-25   10:26:53
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int a, x, b, y; cin >> a >> x >> b >> y;
        ((a/(x*1.0))==(b/(y*1.0)))? cout<<"Equal\n":((a/(x*1.0))>(b/(y*1.0)))? cout<<"Alice\n":cout<<"Bob\n";
    }

    return 0;
}