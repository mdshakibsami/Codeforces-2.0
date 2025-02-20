#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define all(a) a.begin(),a.end()
#define show(a) for(auto i:a)cout<<i<<' ';cout<<endl;
#define showMP(a) for(auto i:a)cout<<i.first<<' '<<i.second<<endl;
const int MOD = 1e9+7;
 
void solve()
{
    int n;  cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int ans = 1;
    int x = 1;
    for(int i=0;i<n-1;i++)
    {
        if(v[i]<v[i+1])
        {
            x++;
            ans = max(ans,x);
        } 
        else 
        {
            x = 1;
        }
    }
    cout<<ans<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
   
    solve();
    
}