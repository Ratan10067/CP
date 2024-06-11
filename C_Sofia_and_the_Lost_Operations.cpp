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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int m;
        cin >> m;
        vector<int> d(m);
        for (int i = 0; i < m; i++)
        {
            cin >> d[i];
            mp[d[i]]++;
        }
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                auto it = mp.find(b[i]);
                if (it == mp.end())
                {
                    found = true;
                    break;
                }
                else
                {
                    mp[b[i]]--;
                    if (mp[b[i]] == 0)
                        mp.erase(mp.find(b[i]));
                }
            }
        }
        bool f = false;
        int temp = d[m - 1];
        for (int i = 0; i < n; i++)
        {
            if (temp == b[i])
                f = true;
        }
        if (found)
            cout << "NO" << endl;
        else
        {
            if (!f)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
    return 0;
}