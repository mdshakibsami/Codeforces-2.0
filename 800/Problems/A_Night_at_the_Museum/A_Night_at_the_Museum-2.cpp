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
    int ans = 0;
    int position = 97; // ASCII a = 97
    int a,b;
    
    for(auto x:s)
    {
        a = abs(position - x);
        if(a>13) a = (26-a);
        position = x;
        ans+=a;
    }
    cout<<ans<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    solve();
    
}