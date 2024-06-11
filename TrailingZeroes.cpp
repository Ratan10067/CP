#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define pi 3.14
#define int long long
class Solution
{
public:
    int trailingZeroes(int n)
    {
        int result = 0;
        while (n > 0)
        {
            n = n / 5;
            result += n;
        }
        return result;
    }
};
signed main()
{
    int n;cin>>n;
    Solution sol;
    cout<<sol.trailingZeroes(n)<<endl;
    return 0;
}