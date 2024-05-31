//  Creator: Sayan Dev Nath
//  Created: 2024-03-28   06:51:29
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int x, y; cin >> x >> y;
        (y%x==0)? cout<<y/x-1<<'\n':cout<<y/x<<'\n';
    }

    return 0;
}