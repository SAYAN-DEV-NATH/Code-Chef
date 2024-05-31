//  Creator: Sayan Dev Nath
//  Created: 2024-03-28   06:41:38
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        bool flag = true;
        for(int i=2; i<n; i++)
            if(n%i==0) flag=false;

        if(n==1) cout<<"no\n";
        else if(flag) cout<<"yes\n";
        else cout<<"no\n";
    }

    return 0;
}