//---> Creator: Sayan Dev Nath
//---> Created: 2024-03-23 23:29:52
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int a, b; cin >> a >> b;
        int c = 21 - (a+b);
        (c>=1 && c<=10)? cout<<c<<'\n':cout<<"-1"<<'\n';
    }

    return 0;
}