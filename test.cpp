#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n / 2; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                cout << "\\";
            (i + j == n) ? cout << "/" : cout << " ";
        }
        cout << endl;
    }
    int sz = (n / 2) + 1;
    for (int i = 1; i <= sz; i++)
        (sz == i) ? cout << "X" : cout << " ";

    cout << endl;
    sz = n / 2;
    for (int i = sz; i >= 1; i--)
    {
        for (int j = n - 1; j >= 1; j--)
        {
            if (i + j == n)
                cout << "/";
            (i == j) ? cout << "\\" : cout << " ";
        }
        cout << endl;
    }
    return 0;
}