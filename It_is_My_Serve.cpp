//  Creator: Sayan Dev Nath
//  Created: 2024-03-24   21:18:48
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int a, b; cin >> a >> b;
        int s = a+b;
        
        ((s/2)%2==0)? cout<<"Alice\n":cout<<"Bob\n";
    }

    return 0;
}