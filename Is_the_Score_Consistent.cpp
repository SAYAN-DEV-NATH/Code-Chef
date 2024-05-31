#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--)
    {
        int a, b, x, y;
        cin >> a >> b >> x >> y;

        (x>=a && y>=b)? cout<<"POSSIBLE\n":cout<<"IMPOSSIBLE\n";
    }
    return 0;
}