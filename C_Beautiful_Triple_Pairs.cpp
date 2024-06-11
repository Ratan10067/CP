#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int countBeautifulPairs(const vector<int> &a)
{
    int n = a.size();
    int beautifulPairsCount = 0;

    for (int j = 0; j <= n - 4; ++j)
    {
        int b1 = a[j], b2 = a[j + 1], b3 = a[j + 2];
        int c1 = a[j + 1], c2 = a[j + 2], c3 = a[j + 3];

        int diffCount = 0;
        if (b1 != c1)
            ++diffCount;
        if (b2 != c2)
            ++diffCount;
        if (b3 != c3)
            ++diffCount;

        if (diffCount == 1)
        {
            ++beautifulPairsCount;
        }
    }

    return beautifulPairsCount;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        cout << countBeautifulPairs(a) << endl;
    }

    return 0;
}
