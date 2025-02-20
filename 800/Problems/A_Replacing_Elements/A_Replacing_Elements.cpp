#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define int long long
#define all(a) a.begin(),a.end()
#define show(a) for(auto i:a)cout<<i<<' ';cout<<endl;
#define showMP(a) for(auto i:a)cout<<i.first<<' '<<i.second<<endl;
#define vin(v,n) for(int i=0;i<n;i++) cin>>v[i];
const int MOD = 1e9+7;
 
void solve()
{
    int n,d;    cin>>n>>d;
    vector<int>v(n);
    vin(v,n);
    sort(all(v));
    if(v[0]+v[1]<=d || v[n-1]<=d) yes;
    else no;
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