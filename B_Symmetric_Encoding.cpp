#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define pi 3.14
#define int long long 
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str = "";
        cin >> str;
        set<char> st;
        for (auto &i : str)
            st.insert(i);
        string s = "";
        for (auto &i : st)
            s.push_back(i);
        // cout << s << endl;
        map<char, char> mp;
        int i = 0;
        int j = s.size() - 1;
        while (i <= j)
        {
            mp[s[i]] = s[j];
            mp[s[j]] = s[i];
            i++;
            j--;
        }
        // for (auto i : mp)
        //     cout << i.first << " " << i.second << endl;
        // string ans = "";
        for (int i = 0; i < n; i++)
        {
            str[i] = mp[str[i]];
        }
        cout << str << endl;
    }
    return 0;
}