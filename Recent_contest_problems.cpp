//  Creator: Sayan Dev Nath
//  Created: 2024-03-28   06:30:44
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t; 
    while(t--)
    {
        int n; cin >> n;
        int a=0, b=0;
        for(int i=0; i<n; i++)
        {
            string x; cin >> x;
            if(x=="START38") a++;
            else b++;
        }
        cout << a << " " << b << '\n';
    }

    return 0;
}