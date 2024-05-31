#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tt; cin >> tt;
    while(tt--)
    {
        int n; cin >> n;
        (n%4==0)? cout<<n/4<<'\n':cout<<n/4+1<<'\n';
    }

    return 0;
}