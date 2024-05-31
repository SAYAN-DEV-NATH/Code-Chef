#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--)
    {
        int n, x; cin >> n >> x;

        int cnt=0;
        while(n--)
        {
            int a; cin >> a;
            if(a>=x) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}