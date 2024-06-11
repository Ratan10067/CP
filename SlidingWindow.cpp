#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define pi 3.14
#define int long long
signed main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    vector<int> v;
    multiset<int> mt;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mt.insert(arr[i]);
        int y = mt.size();
        if (y > k)
        {
            mt.erase(mt.find(arr[i - k]));
        }
        if (y == k)
        {
            int temp = k / 2;
            auto it = mt.begin();
            if (!(k & 1))
                temp--;
            while (temp--)
            {
                ++it;
            }
            int val = *it;
            v.push_back((val));
            cout << v.back() << " ";
        }
    }
    cout << endl;
    return 0;
}