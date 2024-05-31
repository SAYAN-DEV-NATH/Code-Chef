/*****************************
-->  Penman: Sayan Dev Nath
-->  Date: 2024-03-22 23:40:08
******************************/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int n, x; cin >> n >> x;
        if(x==0 or n==x) cout << "0\n";
        else
        {
            if((n-x) < x) cout << n-x << "\n";
            else cout << x <<"\n";
        }
    }

    return 0;
}