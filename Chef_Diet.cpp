/*-----------------(ও নমঃ শিবায়)-----------------*/
#include <bits/stdc++.h> // Creator: SAYAN-DEV-NATH
using namespace std;     // Created: 2024-06-19 23:29:58
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    ll TC;
    cin >> TC;
    while (TC--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool flag = true;
        int idx;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > k)
            {
                if (i != n - 1)
                    a[i + 1] += (a[i] - k);
            }
            else if (a[i] == k)
                continue;
            else
            {
                flag = false;
                idx = i;
                break;
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO"
                 << " " << idx + 1 << endl;
    }
    return 0;
}