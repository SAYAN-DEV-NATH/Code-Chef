//---> Creator: Sayan Dev Nath
//---> Created: 2024-03-23 23:09:19
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int x, y, z; cin >> x >> y >> z;
        if(x <= 3) cout << (x*y) << '\n';
        else 
        {
            if(x%3==0)
                cout << (((x/3)-1)*z) + (x*y) << '\n';
            else
                cout << ((x/3)*z) + (x*y) << '\n';
        }
    }

    return 0;
}