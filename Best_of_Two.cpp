//  Creator: Sayan Dev Nath
//  Created: 2024-03-27   23:17:32
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t; while(t--)
    {
        int a, b, c, x, y, z;
        cin >> a >> b >> c >> x >> y >> z;
        int ans1, ans2;
        if(a<=b && a<=c) ans1 = b+c;
        else if(b<=a && b<=c) ans1 = a+c;
        else if(c<=a && c<=b) ans1 = a+b;

        if(x<=y && x<=z) ans2 = y+z;
        else if(y<=x && y<=z) ans2 = x+z;
        else if(z<=x && z<=y) ans2 = x+y;

        (ans1>ans2)? cout<<"Alice\n":(ans1==ans2)? cout<<"Tie\n":cout<<"Bob\n";
    }

    return 0;
}