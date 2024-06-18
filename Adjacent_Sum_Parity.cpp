/*-----------------(ও নমঃ শিবায়)-----------------*/
#include <bits/stdc++.h> // Creator: SAYAN-DEV-NATH
using namespace std;     // Created: 2024-06-18 08:47:44
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    ll TC;
    cin >> TC;
    while (TC--)
    {
        int n;
        cin >> n;
        int cnt = 0;
        while (n--)
        {
            int x;
            cin >> x;
            if (x == 1)
                cnt++;
        }
        (cnt % 2 == 0) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}