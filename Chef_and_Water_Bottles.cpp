//---> Creator: Sayan Dev Nath
//---> Created: 2024-03-23 22:04:04
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int n, x, k;
        cin >> n >> x >> k;

        if(x>k) cout << "0" << endl;
        else if((k/x) <= n) cout << (k/x) << endl;
        else cout << n << endl;
    }

    return 0;
}