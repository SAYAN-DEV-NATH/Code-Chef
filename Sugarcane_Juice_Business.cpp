#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t; cin >> t;

    while(t--)
    {
        ll n; cin >> n;
        
        n *= 50;
        ll a = (n*20)/100;
        ll b = (n*30)/100;

        cout << n - (a+a+b) << endl;
    }   
    return 0;
}