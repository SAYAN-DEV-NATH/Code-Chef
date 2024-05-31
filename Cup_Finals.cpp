//  Creator: Sayan Dev Nath
//  Created: 2024-03-25   00:33:38
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int a, b, c; cin >> a >> b >> c;
        (c >= abs(a-b))? cout<<"YES\n":cout<<"NO\n";
    }

    return 0;
}