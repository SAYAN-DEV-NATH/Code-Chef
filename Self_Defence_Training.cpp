//  Creator: Sayan Dev Nath
//  Created: 2024-03-25   00:28:47
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int cnt = 0;
        while(n--)
        {
            int x; cin >> x;
            if(x>=10 and x<=60) cnt++;
        }
        cout << cnt << '\n';
    }

    return 0;
}