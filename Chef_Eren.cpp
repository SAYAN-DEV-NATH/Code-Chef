//  Creator: Sayan Dev Nath
//  Created: 2024-03-25   00:07:42
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int n, a, b; cin >> n >> a >> b;
        int even=0, odd=0;
        for(int i=1; i<=n; i++)
            (i%2==0)? even+=a:odd+=b;
        cout << even+odd << "\n";
        
    }

    return 0;
}