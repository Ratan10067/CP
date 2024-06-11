#include<bits/stdc++.h>
using namespace std;

using lli = long long int;
#define mod 1000000007
#define pi 3.14
signed main(){
lli n;cin>>n;
lli arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
lli maxSum = INT_MIN;
lli sum = 0;
for (int i = 0; i < n; i++)
{
    sum+=arr[i];
    if(sum>maxSum)
    {
        maxSum = sum;
    }
    if(sum<0)
    {
        sum = 0;
    }
}
cout<<maxSum<<endl;
return 0;
}