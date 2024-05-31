//  Creator: Sayan Dev Nath
//  Created: 2024-03-26   23:31:50
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n], x=0, y=0;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            (a[i]==1)? ++x:++y;
        }
        if(x==y) cout << "0\n";
        else if(n%2!=0)  cout << "-1\n";
        else if(x > y) cout << (x-y)/2 << endl;
        else cout << (y-x)/2 << endl;
    }
    return 0;
}