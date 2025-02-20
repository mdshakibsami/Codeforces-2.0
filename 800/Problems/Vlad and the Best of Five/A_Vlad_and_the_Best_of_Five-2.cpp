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
    string s;   cin>>s;
    cout<<((count(all(s),'A') > count(all(s),'B')) ? "A" : "B")<<endl;
      
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