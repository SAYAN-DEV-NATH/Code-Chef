//  Creator: Sayan Dev Nath
//  Created: 2024-03-26   13:21:57
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int ans = 1;
        for(int i=2; i<=n; i++) ans *= i;
        cout << ans << '\n';
    }

    return 0;
}