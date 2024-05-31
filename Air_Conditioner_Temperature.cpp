#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--)
    {
        int a, b, c; cin >> a >> b >> c;

        (b>=a && b>=c)? cout<<"Yes\n":cout<<"No\n";
    }
    return 0;
}