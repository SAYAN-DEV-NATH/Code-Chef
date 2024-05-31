//  Creator: Sayan Dev Nath
//  Created: 2024-03-26   23:26:30
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
    {
        int a, b, c; cin >> a >> b >> c;
        int sum = a+b+c;
        if(a<=b and a<=c) cout << sum-a << endl;
        else if(b<=a and b<=c) cout << sum-b << endl;
        else cout << sum-c << endl;
    }
    return 0;
}