//  Creator: Sayan Dev Nath
//  Created: 2024-03-26   22:45:37
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
    {
        int x, y, k;
        cin >> x >> y >> k;

        if(x==y) cout << "0\n";
        else
        {
            int a = abs(x-y);
            cout << ceil(a/(k*1.0)) << endl;
        }
    }
    return 0;
}