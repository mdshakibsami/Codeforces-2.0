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
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int x;  cin>>x;
        mp[x]++;
    }
    for(auto x:mp)
    {
        if(x.second>=3)
        {
            cout<<x.first<<endl;
            return;
        }
    }
    cout<<-1<<endl;

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