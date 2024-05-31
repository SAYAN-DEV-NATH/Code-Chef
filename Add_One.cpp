//  Creator: Sayan Dev Nath
//  Created: 2024-03-31   09:28:29
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t; while(t--) {
        string num; cin >> num;
        bool carry = true;
        for(int i=num.length()-1; i>=0 && carry; --i) {
            if(num[i]=='9') {
                num[i] = '0';
            }
            else {
                num[i] += 1;
                carry = false;
            }
        }
        if(carry) num = "1"+num;
        cout << num << '\n';
    }

    return 0;
}