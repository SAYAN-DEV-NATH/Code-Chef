#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--)
    {
        int x, a, b; cin >> x >> a >> b;

        int c = a + (b*2);
        (c>=x)? cout<<"Qualify\n":cout<<"NotQualify\n";
    }
    return 0;
}