#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
#define mod 1000000007
#define pi 3.14
signed main()
{
    lli n;
    cin >> n;
    set<int> st;
    lli temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        st.insert(temp);
    }
    cout<<st.size()<<endl;
    return 0;
}