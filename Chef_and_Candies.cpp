#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--)
    {
        int n, x; cin >> n >> x;

        if(n >= x)
        {
            n-= x;
            (n%4==0)? cout<<(n/4)<<"\n":cout<<(n/4)+1<<"\n";
        }
        else cout << "0" << endl;
    }
    return 0;
}