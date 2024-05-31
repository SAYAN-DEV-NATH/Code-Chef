//  Creator: Sayan Dev Nath
//  Created: 2024-03-25   10:00:02
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int a, b; cin >> a >> b;
        cout << abs(ceil(a/10.0) - ceil(b/10.0)) << '\n';
    }

    return 0;
}