#include <bits/stdc++.h>
using namespace std;

#define int long long
#define IOS ios_base::sync_with_stdio(false)
#define pi 3.14
#define F first
#define S second
#define MP make_pair
int power(int x, int n)
{
    int ans = 1;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            ans = ans * x;
            n = n - 1;
        }
        else
        {
            n /= 2;
            x = 1LL*x * x;
        }
    }
    return ans;
}
signed main()
{
    IOS;
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int p = 0;
        while (x % 2 == y % 2)
        {
            if (x % 2 == y % 2)
                p++;
            x /= 2;
            y /= 2;
        }
        if (p == 0)
            cout << 1 << endl;
        else
        {
            int ans = power(2, p);
            cout << ans << endl;
        }
    }
    return 0;
}