//  Creator: Sayan Dev Nath
//  Created: 2024-03-25   10:51:19
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int x, y; cin >> x >> y;
        int a = (500 - (x*2)) + (1000 - ((x+y)*4));
        int b = (1000 - (y*4)) + (500 - ((x+y)*2));

        (a>=b)? cout<<a<<'\n':cout<<b<<'\n';
    }

    return 0;
}