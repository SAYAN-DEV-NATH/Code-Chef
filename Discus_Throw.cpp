#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--)
    {
        int a, b, c; cin >> a >> b >> c;
        a = max(a,b);
        b = max(a,c);
        cout << b << endl;
    }

    return 0;
}