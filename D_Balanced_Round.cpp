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
        int n,c;
        cin>>n>>c;
        vector<int> v(n);
        long long sum = 0;
        long long middle = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            sum = sum + v[i]*v[i];
            middle +=v[i];
        }
        sum-=c;
        middle*=4;
        int ans1 = (-middle + sqrt(middle*middle - 4*4*n*sum));
        ans1 = (ans1)/(8*n);
        int ans2 = (-middle - sqrt(middle*middle - 4*4*n*sum));
        ans2 = (ans2) / (8 * n);
        int ans = max(ans1,ans2);
        cout<<ans<<endl;
    }
    return 0;
}