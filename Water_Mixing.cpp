//  Creator: Sayan Dev Nath
//  Created: 2024-03-24   21:27:02
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int a, b, c, d; cin >> a >> b >> c >> d;
        if(a>b)
        {
            int s = a-b;
            (d>=s)? cout<<"YES\n":cout<<"NO\n";
        }
        else if(a<b)
        {
            int s = b-a;
            (c>=s)? cout<<"YES\n":cout<<"NO\n";
        }
        else cout << "YES\n";
    }

    return 0;
}