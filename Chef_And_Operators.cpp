//  Creator: Sayan Dev Nath
//  Created: 2024-03-26   22:00:02
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
    {
        int a, b; cin >> a >> b;
        (a>b)? cout<<">\n":(a<b)? cout<<"<\n":cout<<"=\n";
    }
    return 0;
}