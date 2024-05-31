/*****************************
-->  Penman: Sayan Dev Nath
-->  Date: 2024-03-23 12:04:10
******************************/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        cout << max(z-(y/x), 0) << endl;
    }

    return 0;
}