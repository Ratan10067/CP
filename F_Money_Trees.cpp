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
    int t=1;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> fruit(n);
        vector<int> height(n);
        for (int i = 0; i < n; i++)
        {
            cin>>fruit[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>height[i];
        }
        int i=0;
        int j = 0;
        int sum = 0;
        int ans = 0;
        while (j+1<n)
        {
            if (height[j] % height[j + 1] == 0)
            {
                sum+=fruit[j];
            }
            else
            {
                if(sum+fruit[j]<=k)
                {
                    ans = max(ans, j - i+1);
                    sum+=fruit[j];
                }
                else
                {
                    
                    ans = max(ans, j - i);
                }
                i = j;
            }
            // cout << "sum : " << sum << " j : " << j << " i : " << i << endl;
            if (sum>k)
            {
                ans = max(ans,j-i);
                sum-=fruit[i];
                i++;
            }
            j++;
            // cout<<"sum1 : "<<sum<<" j : "<<j<<" i : "<<i<<endl;
        }
        ans = max(ans, j - i);
        cout<<ans<<endl;
    }
    return 0;
}