#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--)
    {
        int cost; cin >> cost;
        
        if(cost > 5000) cout << cost-500 << endl;
        else if(cost>1000 && cost<=5000) cout << cost-100 << endl;
        else if(cost>100 && cost<=1000) cout << cost-25 << endl;
        else cout << cost << endl;
    }
    return 0;
}