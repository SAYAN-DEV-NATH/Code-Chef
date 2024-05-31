//  Creator: Sayan Dev Nath
//  Created: 2024-03-25   00:02:15
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int s, x, y, z; cin >> s >> x >> y >> z;

        if(s>=(x+y+z)) cout << "0\n";
        else (((x+z)<=s) or (y+z)<=s)? cout<<"1\n":cout<<"2\n";
    }

    return 0;
}