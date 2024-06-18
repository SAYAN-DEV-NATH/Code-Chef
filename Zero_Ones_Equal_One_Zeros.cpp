/*-----------------(ও নমঃ শিবায়)-----------------*/
#include <bits/stdc++.h> // Creator: SAYAN-DEV-NATH
using namespace std;     // Created: 2024-06-18 06:17:38
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
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            if (i == 0 || i == n - 1)
                ans.push_back('1');
            else
                ans.push_back('0');
        }
        cout << ans << endl;
    }
    return 0;
}