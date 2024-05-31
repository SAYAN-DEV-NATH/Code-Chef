//  Creator: Sayan Dev Nath
//  Created: 2024-03-26   06:47:01
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
        if(((a!=c) and (a!=d)) && ((b!=c) and (b!=d))) cout << "2\n";
        else if((a+b)==(c+d)) cout << "0\n";
        else cout << "1\n";
    }

    return 0;
}