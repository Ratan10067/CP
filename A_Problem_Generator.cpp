#include <bits/stdc++.h>
using namespace std;

#define int long long
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
        int n, m;
        cin >> n >> m;
        string str = "";
        cin >> str;
        unordered_map<char, int> mp;
        string s = "ABCDEFG";
        for (int i = 0; i < str.size(); i++)
        {
            mp[str[i]]++;
        }
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (mp[s[i]] < m)
            {
                ans += (m - mp[s[i]]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}