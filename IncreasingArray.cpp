#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
#define mod 1000000007
#define pi 3.14
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        lli n;
        cin >> n;
        string str = "";
        cin >> str;
        string arr = "map";
        string brr = "pie";
        int t = 0;
        int k = 0;
        lli cnt = 0;
        vector<char> st;
        int j = 0;
        bool found = true;
        for (int i = 0; i < n; i++)
        {
            string s = "";
            for (int j = i; j < i+3; j++)
            {
                if(j<str.size())
                {
                    s.push_back(str[j]);
                }
            }
            if(s=="map" or s=="pie")
            {
                cnt++;
            }
            s.clear();
        }
        cout << cnt << endl;
    }

    return 0;
}