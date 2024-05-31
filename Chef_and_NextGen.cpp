#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--)
    {
        int a, b, x, y;
        cin >> a >> b >> x >> y;

        ((a*b)<=(x*y))? cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}