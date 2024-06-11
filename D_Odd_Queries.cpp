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
    IOS;
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n,q;
        cin>>n>>q;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            if(i)
            {
                v[i]+=v[i-1];
            }
        }
        while(q--)
        {
            int l,r,k;cin>>l>>r>>k;
            l--;r--;
            int sum1 = 0;
            if(l!=0)
            {
                sum1 = v[l-1];
            }
            int sum2 = v[n-1] - v[r];
            int sum = sum1 + sum2 + 1LL*k*(r-l+1);
            if(sum%2==1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}