////Number of subarray having sum of M
////both postive and negative numbers

#include<bits/stdc++.h>
using namespace std;
#define int            long long
#define pb             push_back
#define endl           '\n'
#define pp             pair<int,pair<int,int>>
#define asort(a,n)     sort(a,a+n) 
#define vsort(v)       sort(v.begin(),v.end())
#define vrsort(v)      sort(v.rbegin(),v.rend());
void edm()
{
    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}
void solve()
{
    int n,m;cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int ans=0;int sum=0;
    map<int,int>mp;
    mp[0]=1;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        ans+=mp[sum-m];
        mp[sum]++;
    }
    cout<<ans<<endl;
}
signed main()
{
    edm();
    int t = 1;
    //cin>>t;
    for(int i=1;i<=t;i++)
    {
        ///cout<<"Case "<<i<<": ";
        solve();
    }
}
