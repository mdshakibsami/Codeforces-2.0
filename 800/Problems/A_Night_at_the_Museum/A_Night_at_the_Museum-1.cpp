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
    string t = "abcdefghijklmnopqrstuvwxyz";
    map<char,int>mp;
    for(int i=1;i<27;i++)
    {
        mp[t[i-1]] = i;
    }
    
    char indicator = 'a';
    int ans = 0;
    for(auto x:s)
    {  
        int a = abs(mp[x]-mp[indicator]);
        int b = abs(26-a);
        ans+= min(a,b);
        indicator = x;
    }
    cout<<ans<<endl;

}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    solve();
    
}