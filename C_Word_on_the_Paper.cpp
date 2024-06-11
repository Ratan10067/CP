#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
#define mod 1000000007
#define IOS ios_base::sync_with_stdio(false)
#define pi 3.14
#define F first
#define S second
#define MP make_pair
signed main()
{
    IOS;
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        vector<vector<char> > v(8, vector<char>(8));
        pair<int, int> state;
        bool found = true;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> v[i][j];
                if ((v[i][j] >= 'a' and v[i][j] <= 'z') and found)
                {
                    state = make_pair(i, j);
                    found = false;
                }
            }
        }
        string ans = "";
        for (int i = state.first; i < 8; i++)
        {
            if (v[i][state.second] >= 'a' and v[i][state.second] <= 'z')
                ans.push_back(v[i][state.second]);
            else
                break;
        }
        cout << ans << endl;
    }
    return 0;
}