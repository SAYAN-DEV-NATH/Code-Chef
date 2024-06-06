// Creator: SAYAN-DEV-NATH
// Created: 2024-06-05 22:12:50
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define yes cout << "YES\n"
#define no cout << "NO\n"
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    ll TC;
    cin >> TC;
    while (TC--)
    {
        ll n;
        cin >> n;

        vector<pair<ll, ll>> v(n);
        for (ll i = 0; i < n; i++)
        {
            ll a, b;
            cin >> a >> b;
            if (a < b)
                swap(a, b);
            v[i] = {a, b};
        }

        ll sum = LLONG_MIN;
        for (ll i = 0; i < n - 1; i++)
        {
            for (ll j = i + 1; j < n; j++)
            {
                ll first_i = v[i].first, second_i = v[i].second;
                ll first_j = v[j].first, second_j = v[j].second;
                sum = max(sum, ((first_i * first_j) + (second_i * second_j)));
            }
        }
        cout << sum << endl;
    }

    return 0;
}
