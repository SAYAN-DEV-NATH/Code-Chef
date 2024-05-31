//  Creator: Sayan Dev Nath
//  Created: 2024-03-25   11:07:24
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int a, b, c; cin >> a >> b >> c;
        if((a>b && a<c) || ((a>c && a<b))) cout << a << '\n';
        else if((b>a && b<c) || ((b>c && b<a))) cout << b << '\n';
        else cout << c << '\n';
    }

    return 0;
}