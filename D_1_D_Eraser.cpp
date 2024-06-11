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
        int n,k;
        cin>>n>>k;
        string str = "";
        cin>>str;
        int cnt = 0;
        int index = 0;
        bool first_index = true;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='B' and first_index)
            {
                cnt++;
                index = i;
                first_index = false;
            }
            else if(str[i]=='B' and !first_index)
            {
                if(i-index<k)
                {
                    continue;
                }
                else
                {
                    cnt++;
                    index = i;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}