//  Creator: Sayan Dev Nath
//  Created: 2024-03-25   10:32:51
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    (n%4==0)? cout<<++n<<'\n':cout<<--n<<'\n';

    return 0;
}