#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--)
    {
        int x, y, z; cin >> x >> y >> z;

        float a = (z*100.00)/(x*y);

        (a > 50)? cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}