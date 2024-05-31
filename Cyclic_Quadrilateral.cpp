//  Creator: Sayan Dev Nath
//  Created: 2024-03-25   11:49:48
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int a, b, c, d; cin >> a >> b >> c >> d;
        (a+c == 180)? cout << "YES\n":cout<<"NO\n";
    }

    return 0;
}