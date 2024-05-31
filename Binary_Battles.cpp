//  Creator: Sayan Dev Nath
//  Created: 2024-03-26   23:57:50
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int cnt=0;
        while(a != 1)
        {
            cnt++;
            a /= 2;
        }
        cout << (cnt*b) + ((cnt-1)*c) << endl;
    }
    return 0;
}