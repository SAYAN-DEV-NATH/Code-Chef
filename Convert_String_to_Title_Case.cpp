//  Creator: Sayan Dev Nath
//  Created: 2024-03-31   08:34:22
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n; 
    cin.ignore();
    while(n--) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        while(ss >> word) {
            if(word[0] >= 'A' && word[0] <= 'Z') {
                cout << word << " ";
            }
            else {
                for(int i=0; i<word.length(); i++) {
                    if(i==0) word[0] -= 32;
                    else {
                        if(word[i] >= 'A' && word[i] <= 'Z') word[i] += 32;
                    }
                }
                cout << word << " ";
            }
        } cout << '\n';
    }
    return 0;
}