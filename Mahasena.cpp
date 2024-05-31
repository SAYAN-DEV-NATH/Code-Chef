#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int even=0, odd=0;
    while(n--)
    {
        int x; cin >> x;
        if(x%2==0) even++;
        else odd++;
    }
    (even>odd)? cout<<"READY FOR BATTLE\n":cout<<"NOT READY\n";
    
    return 0;
}