/*****************************
-->  Penman: Sayan Dev Nath
-->  Date: 2024-03-23 12:19:03
******************************/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='A') s[i]='T';
            else if(s[i]=='T') s[i]='A';
            else if(s[i]=='C') s[i]='G';
            else s[i]='C';
        }
        cout << s << '\n';
    }

    return 0;
}