#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define pi 3.14
#define int long long
signed main()
{
    string str = "";
    cin >> str;
    string ans = "";
    string num = "";
    multiset<char> mt;
    bool found_1 = false;
    bool found_0 = true;
    multiset<int> st;
    for (int i = 0; i < str.length(); i++)
    {
        mt.insert(str[i]);
        st.insert(str[i]);
    }
    // auto it = mp.begin();
    // while (it != mp.end())
    // {
    //     if (it->second == 1)
    //         found_1 = true;
    //     if (it->second == 1)
    //         found_1 = false;
    // }
    if (str.size() & 1)
    {
        auto it = st.begin();
        while (it!=st.end())
        {
            if (mt.find(*it) != mt.end())
            {
                ans.push_back(*it);
                mt.erase(mt.find(*it));
                st.erase(st.find(*it));
            }
            if (mt.find(*it) != mt.end())
            {
                num.push_back(*it);
                st.erase(st.find(*it));
                mt.erase(mt.find(*it));
            }
            if (mt.size() == 1)
                break;
            ++it;
        }
        if (mt.size() != 1)
        {
            cout << "NO SOLUTION 1" << endl;
            return 0;
        }
        ans.push_back(*mt.begin());
    }
    else
    {
            auto it = st.begin();
            while (it != st.end())
            {
                if (mt.count(*it) & 1)
                {
                    cout << "NO SOLUTION" << endl;
                    return 0;
                }
                if (mt.find(*it) != mt.end())
                {
                    ans.push_back(*it);
                    mt.erase(mt.find(*it));
                }
                if (mt.find(*it) != mt.end())
                {
                    num.push_back(*it);
                    mt.erase(mt.find(*it));
                }
                if (mt.size() == 1)
                    break;
                ++it;
            }
        if (mt.size() != 0)
        {
            cout << "NO SOLUTION" << endl;
            return 0;
        }
    }
    reverse(num.begin(), num.end());
    cout << ans + num << endl;
    return 0;
}
