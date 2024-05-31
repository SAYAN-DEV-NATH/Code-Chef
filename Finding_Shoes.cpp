/*****************************
-->  Penman: Sayan Dev Nath
-->  Date: 2024-03-22 23:58:32
******************************/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int n , x; cin >> n >> x;
        
        if(n <= x) cout << n << endl;
        else cout << n*2 - x << endl;
    }

    return 0;
}