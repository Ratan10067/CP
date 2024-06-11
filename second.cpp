#include <bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1000000007
#define pi 3.14
int f(int x, int y)
{
    return (x + y) % 100000000; // 10^8 = 100000000
}
signed main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int sum = 0;
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            sum = (v[i] + v[j]) % mod;
            ans += sum;
        }
    }
    cout << ans << endl;
    return 0;
}