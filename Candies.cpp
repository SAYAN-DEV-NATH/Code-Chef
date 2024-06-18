/*-----------------(ও নমঃ শিবায়)-----------------*/
#include <bits/stdc++.h> // Creator: SAYAN-DEV-NATH
using namespace std;     // Created: 2024-06-18 10:14:54
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
        map<int, int> mp;
        for (int i = 0; i < 2 * n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        bool flag = true;
        for (auto &[a, b] : mp)
        {
            if (b > 2)
            {
                flag = false;
                break;
            }
        }
        (flag) ? cout << "Yes\n" : cout << "No\n";
    }
    return 0;
}