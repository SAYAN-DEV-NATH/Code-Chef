//  Creator: Sayan Dev Nath
//  Created: 2024-03-26   21:32:56
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int ans=0, cnt=1;
        bool flag = false;
        for(int i=2; i<=n; i++)
        {
            flag = true;
            if(cnt==8)
            {
                ans++;
                cnt=2;
            }
            else cnt++;
        }
        if(flag) cout << ans+1 << endl;
        else cout << ans << endl;
    }
    return 0;
}