#include <bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1000000007
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
        int n;
        cin >> n;
        vector<int> v(n);
        int mini = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mini = min(v[i], mini);
        }
        int min_index = -1;
        for (int i = 0; i < n; i++)
        {
            if (mini == v[i])
            {
                min_index = i;
                break;
            }
        }
        int temp1 = INT_MAX, temp2 = INT_MAX;
        for (int i = min_index; i > 0; i--)
        {
            temp1 = min(temp1, max(v[i], v[i - 1]));
        }
        for (int i = min_index; i < n - 1; i++)
        {
            temp2 = min(temp2, max(v[i], v[i + 1]));
        }
        int ans = min(temp1, temp2) - 1;
        cout << ans << endl;
    }
    return 0;
}