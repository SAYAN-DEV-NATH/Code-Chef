//  Creator: Sayan Dev Nath
//  Created: 2024-03-25   12:14:57
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int a, b, x, y; cin >> a >> b >> x >> y;
        float c = (a/(x*1.0));
        float d = (b/(y*1.0));
        (c==d)? cout<<"Both\n":(c<d)? cout<<"Chef\n":cout<<"Chefina\n";
    }

    return 0;
}