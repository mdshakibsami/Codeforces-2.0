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
    int a,b;    cin>>a>>b;
    int ans = 1;
    for(int i=1;i<=min(a,b);i++) 
    {
        ans*=i;
    }
    cout<<ans<<endl;

}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    solve();
    
}