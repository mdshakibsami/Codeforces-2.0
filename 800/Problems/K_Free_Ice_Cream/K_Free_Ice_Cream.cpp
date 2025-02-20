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
    int n,ans,cnt = 0;
    cin>>n>>ans;
    while (n--)
    {
        char ch;    cin>>ch;
        int x;      cin>>x;
        if(ch == '+') 
        {
            ans+= x;
        }
        else
        {
            if(ans>=x) ans-=x;
            else cnt++;
        }
    }
    cout<<ans<<" "<<cnt<<endl;
    
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    solve();

}