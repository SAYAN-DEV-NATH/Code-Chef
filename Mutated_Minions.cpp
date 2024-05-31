//  Creator: Sayan Dev Nath
//  Created: 2024-03-26   22:17:03
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        vector<int> a(n);
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            int x = a[i]+k;
            if(x%7==0) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}