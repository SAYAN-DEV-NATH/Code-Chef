/*****************************
-->  Penman: Sayan Dev Nath
-->  Date: 2024-03-23 11:32:55
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
        int r = n%3;

        (r==0)? cout<<"NORMAL\n":(r==1)? cout<<"HUGE\n":cout<<"SMALL\n";
    }

    return 0;
}