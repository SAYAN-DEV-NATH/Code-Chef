#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;

    while(t--)
    {
        int n, cost; cin >> n >> cost;
        int ans;
        (n%6==0)? cout<<(n/6)*cost<<endl:cout<<(n/6)*cost+cost<<endl;
    }

    return 0;
}