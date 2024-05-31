//  Creator: Sayan Dev Nath
//  Created: 2024-03-25   00:14:34
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        if(n%10==0) cout << n/10 << '\n';
        else
        {
            int r = n/10;
            n -= r*10;
            (n%5==0)? cout<<r+(n/5)<<'\n':cout<<"-1\n";
        }
    }

    return 0;
}