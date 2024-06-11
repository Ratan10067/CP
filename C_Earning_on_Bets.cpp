#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> k(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> k[i];
        }

       vector<int> bets(n);
        long long totalBet = 0;

        for (int i = 0; i < n; ++i)
        {
            bets[i] = 1; 
            totalBet += bets[i];
        }

        bool valid = true;
        for (int i = 0; i < n; ++i)
        {
            if (totalBet >= k[i] * bets[i])
            {
                valid = false;
                break;
            }
        }

        if (valid)
        {
            for (int i = 0; i < n; ++i)
            {
                cout << bets[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "No valid distribution found" << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
