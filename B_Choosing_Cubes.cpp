#include <bits/stdc++.h>
using namespace std;

// #define int long long
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
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> v(n);
        f--;
        map<int, vector<int>> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int check = v[f];
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        // cout << check << endl;
        // for (auto i : v)
        //     cout << i << " ";
        // cout << endl;
        for (int i = 0; i < n; i++)
        {
            mp[v[i]].push_back(i);
        }
        // cout << endl;
        // for (auto i : mp)
        // {
        //     cout << i.first << ".  ";
        //     for (auto j : i.second)
        //         cout << j << " ";
        //     cout << endl;
        // }
        vector<int> temp = mp[check];
        if (temp.front() + 1 > k)
            cout << "NO" << endl;
        else
        {
            bool found = false;
            for (int i = 0; i < temp.size(); i++)
            {
                if (temp[i] + 1 > k)
                    found = true;
            }
            if (!found)
                cout << "YES" << endl;
            else
                cout << "MAYBE" << endl;
        }
    }
    return 0;
}