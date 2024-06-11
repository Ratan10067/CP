#include <bits/stdc++.h>
using namespace std;

#define int long long
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
        vector<vector<char>> v(10, vector<char>(10));
        int ans = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> v[i][j];
                if (v[i][j] == 'X')
                {
                    if ((i == 0 or i == 9))
                    {
                        ans += 1;
                    }
                    if (j == 0 or j == 9)
                    {
                        ans++;
                    }
                    if ((i == 1 or i == 8))
                    {
                        ans += 2;
                    }
                    if ((j == 1 or j == 8))
                    {
                        ans += 2;
                    }
                    if ((i == 2 or i == 7))
                    {
                        ans += 3;
                    }
                    if ((j == 2 or j == 7))
                    {
                        ans+=3;
                    }
                    if ((i == 3 or i == 6) and (j == 3 or j == 6))
                    {
                        ans += 4;
                    }
                    if ((i == 4 or i == 5) and (j == 4 or j == 5))
                    {
                        ans += 5;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}