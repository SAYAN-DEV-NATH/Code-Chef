/*****************************
-->  Penman: Sayan Dev Nath
-->  Date: 2024-03-22 23:46:28
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
        cout << x / (y*2) << endl;
    }

    return 0;
}