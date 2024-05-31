#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--)
    {
        int n, x; cin >> n >> x;
        int a = n*x;

        (a%4==0)? cout<<(a/4)<<endl:cout<<(a/4)+1<<endl;
    }
    return 0;
}