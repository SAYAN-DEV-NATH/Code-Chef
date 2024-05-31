#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float a, b, c;
        cin >> a >> b >> c;
        float x = (a + b) / 2;
        if (x > c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}