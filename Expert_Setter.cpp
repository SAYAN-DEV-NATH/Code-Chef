#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--)
    {
        int a, b; cin >> a >> b;

        (b>=ceil(a/2.0))? cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}