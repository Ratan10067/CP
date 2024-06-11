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
        map<int, set<int>> mp;
        for (int i = 0; i < n; i++)
        {
            int m;
            string str = "";
            cin >> m;
            cin >> str;
            bitset<64> foo(str);
            int temp = foo.to_ullong();
            if (temp != 0)
                mp[temp].insert(m);
        }
        auto it1 = mp.find(1);
        auto it2 = mp.find(2);
        auto it3 = mp.find(3);
        set<int> ans;
        int cnt = 0;
        if (it3 != mp.end())
        {
            ans.insert(*it3->second.begin());
        }
        if (it2 != mp.end())
        {
            if (it2->second.size() > 1)
            {
                auto it = it2->second.begin();
                int sum = *it;
                ++it;
                sum += *it;
                ans.insert(sum);
            }
            cnt += *it2->second.begin();
        }
        if (it1 != mp.end())
        {
            if (it1->second.size() > 1)
            {
                auto it = it1->second.begin();
                int sum = *it;
                ++it;
                sum += *it;
                ans.insert(sum);
            }
            cnt += *it1->second.begin();
        }
        if (it1 != mp.end() and it2 != mp.end())
        {
            ans.insert(cnt);
        }
        if (ans.empty())
            cout << -1 << endl;
        else if (it3 != mp.end())
            cout << *ans.begin() << endl;
        else if (it1 == mp.end() or it2 == mp.end())
            cout << -1 << endl;
        else
            cout << *ans.begin() << endl;
    }
    return 0;
}