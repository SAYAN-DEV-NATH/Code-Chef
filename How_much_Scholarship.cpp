/*-----------------(ও নমঃ শিবায়)-----------------*/
#include <bits/stdc++.h> // Creator: SAYAN-DEV-NATH
using namespace std;     // Created: 2024-06-18 08:25:26
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int n;
    cin >> n;
    if (n >= 1 && n <= 50)
        cout << 100 << endl;
    else if (n >= 51 && n <= 100)
        cout << 50 << endl;
    else
        cout << 0 << endl;
    return 0;
}