#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string ans = "";
        while (n--)
        {
            int x;
            cin >> x;
            if (k - x >= 0)
            {
                k -= x;
                ans.push_back('1');
            }
            else
                ans.push_back('0');
        }
        cout << ans << endl;
    }
    return 0;
}