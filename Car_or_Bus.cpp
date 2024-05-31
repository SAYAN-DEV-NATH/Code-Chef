#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--)
    {
        int x, y; cin >> x >> y;

        if(x==y) cout<<"SAME\n";
        else (x<y)? cout<<"BIKE\n":cout<<"CAR\n";
    }
    return 0;
}