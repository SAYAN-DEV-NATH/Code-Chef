#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if(a > (b+c+d)) cout << "YES\n";
        else if(b > (a+c+d)) cout << "YES\n";
        else if(c > (b+a+d)) cout << "YES\n";
        else if(d > (b+c+a)) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}