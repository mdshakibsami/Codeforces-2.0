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
    int n,d;  cin>>n>>d;
    vector<int>v(n),vv;
    vin(v,n);
    bool flag = true;
    int cnt = 0;
    for(auto x:v)
    {
        if(x>d) flag = false;
    }

    vv = v;
    sort(all(vv));

    if((vv[0]+vv[1])<=d || flag) yes;
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