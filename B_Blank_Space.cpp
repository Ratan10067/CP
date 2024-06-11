#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
#define mod 1000000007
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
        cin>>n;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        int cnt = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if(v[i]==0)
            {
                cnt++;
            }
            else
            {
                ans = max(ans,cnt);
                cnt = 0;
            }
        }
        ans = max(ans, cnt);
        cout<<ans<<endl;
    }
    return 0;
}