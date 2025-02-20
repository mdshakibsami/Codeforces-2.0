#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define all(a) a.begin(),a.end()
#define show(a) for(auto i:a)cout<<i<<' ';cout<<endl;
#define showMP(a) for(auto i:a)cout<<i.first<<' '<<i.second<<endl;
#define vin(v,n) for(int i=0;i<n;i++) cin>>v[i];
const int MOD = 1e9+7;
 
void solve()
{
    int n;  cin>>n;
    vector<int>v(n),vv;
    vin(v,n);
    vv = v;
    sort(all(vv));
    int mx = vv[n-1];
    for(auto x:v)
    {
        if(x == mx)
        {
            cout<<mx-vv[n-2]<<" ";
        }
        else cout<<x-mx<<" ";
    }
    cout<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int tc;cin>>tc;
    while(tc--)
    {
        solve();
    }
}