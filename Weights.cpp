//  Creator: Sayan Dev Nath
//  Created: 2024-03-24   21:33:55
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        ((a==b)or(a==c)or(a==d)or(a==(b+c))or(a==(b+d))or(a==(c+d))or(a==(b+c+d)))? cout<<"YES\n":cout<<"NO\n";
    }

    return 0;
}