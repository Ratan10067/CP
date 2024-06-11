#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str = "";
        cin >> str;
        unordered_map<char, int> mp;
        for (int i = 0; i < str.size(); i++)
        {
            mp[str[i]] = i;
        }
        int cnt = 0;
        for (auto &i : mp)
        {
            if (i.first == 'a' and i.second==0)
            {
                break;
            }
            if (i.first == 'a' and i.second!=0)
            {
                cnt++;
            }
            if (i.first == 'b' and i.second==1)
            {
                break;
            }
            if (i.first == 'b' and i.second!=1)
            {
                cnt++;
            }
            if (i.first == 'c' and i.second==2)
            {
                break;
            }
            if (i.first == 'c' and i.second != 2)
            {
                cnt++;
            }
        }
        if(cnt<=2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}