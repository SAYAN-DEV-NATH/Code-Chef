#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--)
    {
        int a, b; cin >> a >> b;

        int x = (a*100)/10;
        int y = (b*100)/20;

        (x==y)? cout<<"ANY\n":(x>y)? cout<<"FIRST\n":cout<<"SECOND\n";
    }
    return 0;
}