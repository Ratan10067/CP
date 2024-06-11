#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
#define mod 1000000007
#define IOS ios_base::sync_with_stdio(false)
#define pi 3.14
#define F first
#define S second
vector<vector<int>> g;
vector<int> vis ;
int n, m;
#define MP make_pair
void dfs(int node)
{
    vis[node]++;
    for(auto v:g[node])
    {
        dfs(v);
    }
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin>>n>>m;
        g.clear();
        g.resize(n+1);
        for (int i = 0; i < m; i++)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        vis.assign(n+1,0);
        for (int i = 1; i <= n; i++)
        {
            dfs(i);
        }
        
    }
    return 0;
}