/*****************************
-->  Penman: Sayan Dev Nath
-->  Date: 2024-03-23 12:12:25
******************************/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int x, y; cin >> x >> y;
        y -= x;
        (y%8==0)? cout<<(y/8)<<"\n":cout<<(y/8)+1<<"\n";
    }

    return 0;
}