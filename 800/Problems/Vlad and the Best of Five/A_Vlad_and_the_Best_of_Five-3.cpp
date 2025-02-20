#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int tc;cin>>tc;
    while(tc--)
    {
        string s;   cin>>s;
        int a=0,b=0;
        for(auto x:s)
        {
            if(x=='A') a++;
            else b++;
        }
        if(a>b) cout<<"A"<<endl;
        else cout<<"B"<<endl;
    }
}