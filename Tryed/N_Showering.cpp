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
    int n,s,m;  cin>>n>>s>>m;
    int x,y;    cin>>x>>y;
    int first  = abs(1-x);
    int temp = y;
    n--;
    int mx = y;
    while (n--)
    {
        cin>>x>>y;
        int diff = abs(temp-x);
        temp = y;
        mx = max(mx,diff);
    }
    int z = abs(m-temp);
    mx = max(mx,z);

    if(mx>=s) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
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