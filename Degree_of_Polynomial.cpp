//  Creator: Sayan Dev Nath
//  Created: 2024-03-28   06:22:52
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        int mx;
        for(int i=0; i<n; i++) 
        {
            cin >> a[i];
            if(a[i]!=0) mx=i;
        }
        cout << mx << '\n';
    }

    return 0;
}