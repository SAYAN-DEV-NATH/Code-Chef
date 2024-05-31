#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n >> x;
        (x%n==0)? cout<<"YES\n":cout<<"NO\n";
    }

    return 0;
}