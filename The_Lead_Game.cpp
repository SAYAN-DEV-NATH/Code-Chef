#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int sum1 = 0, sum2 = 0, winner;
    int lead = 0, diff = 0;
    for (int i = 0; i < n; i++)
    {
        int p1, p2;
        cin >> p1 >> p2;
        sum1 = sum1 + p1;
        sum2 = sum2 + p2;
        if (sum1 > sum2)
        {
            diff = sum1 - sum2;
            if (diff > lead)
            {
                lead = diff;
                winner = 1;
            }
        }
        else
        {
            diff = sum2 - sum1;
            if (diff > lead)
            {
                lead = diff;
                winner = 2;
            }
        }
    }
    cout << winner << " " << lead;
    return 0;
}