//  Creator: Sayan Dev Nath
//  Created: 2024-03-26   13:10:41
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t; 
    while(t--)
    {
        int n; cin >> n;
        if(n%5==0) cout << (n/5)*4 << '\n';
        else
        {
            int r = n/5;
            n -= r*5;
            cout << n+r*4 << '\n';
        }
    }
    return 0;
}