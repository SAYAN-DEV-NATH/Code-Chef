//  Creator: Sayan Dev Nath
//  Created: 2024-03-25   11:35:48
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int n, x, p; cin >> n >> x >> p;
        (x==0)? cout<<"FAIL\n":((x*3)-(n-x)>=p)? cout<<"PASS\n":cout<<"FAIL\n";
    }

    return 0;
}