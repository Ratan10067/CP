#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define pi 3.14
#define int long long
signed main()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i)
        {
            arr[i] = arr[i] + arr[i - 1];
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0)
            {
                if (arr[j] == x)
                {
                    cnt++;
                }
            }
            else
            {
                if (arr[j] - arr[i - 1] == x)
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}