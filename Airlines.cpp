//  Creator: Sayan Dev Nath
//  Created: 2024-03-25   00:19:50
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int n, x; cin >> n >> x;
        int a = ceil(x/100.00);
        (n>=a)? cout<<"0\n":cout<<a-n<<'\n';
    }

    return 0;
}