#include <bits/stdc++.h>
using namespace std;

#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        int y;
        cin >> x >> y;
        if (y == 0)
        {
            int var = x % 15;
            if (var == 0)
            {
                cout << x / 15 << endl;
            }
            else
            {
                cout << x / 15 + 1 << endl;
            }
        }
        else if (x == 0)
        {
            int temp = y / 2 + y % 2;
            cout << temp << endl;
        }
        else
        {
            int temp = y / 2 + y % 2;
            int remaining = 15 * temp - y * 4;
            if (remaining >= x)
            {
                cout << temp << endl;
            }
            else
            {
                int sortage = x - remaining;
                // cout<<sortag<<endl;
                int var = sortage % 15;
                if (var == 0)
                {
                    cout << temp + sortage / 15 << endl;
                }
                else
                {
                    int ans = sortage / 15;
                    cout << temp + ans + 1 << endl;
                }
            }
        }
    }
    return 0;
}