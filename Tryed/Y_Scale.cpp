#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define all(a) a.begin(), a.end()
#define show(a)           \
    for (auto i : a)      \
        cerr << i << ' '; \
    cerr << endl;
#define showMP(a)    \
    for (auto i : a) \
        cerr << i.first << ' ' << i.second << endl;
#define vin(v, n)               \
    for (int i = 0; i < n; i++) \
        cin >> v[i];
const int MOD = 1e9 + 7;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> v(n), ans;
    vin(v, n);
    int row = 1;
    string s = v[0];
    for (int i = 0; i < s.size() - 1; i++)
        if (s[i] != s[i + 1])
            row++;
    int col = 1;
    ans.push_back(v[0]);
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] != v[i + 1])
        {
            col++;
            ans.push_back(v[i+1]);
        }
    }
    if (ans.size() == 1 && (n != m))
    {
        for (auto x : v)
            cout << x << endl;
    }
    else
    {
        for(auto x:ans)
        {
            cout<<x[0];
            int cnt = 0;
            for(int i=0;i<n-1;i++)
            {
                if(x[i]!=x[i+1])
                {
                    cout<<x[i+1];
                    cnt++;
                }
            }
            if(cnt != col)
            {
                for(int i = 0;i<abs(cnt-col)-1;i++) cout<<x[x.size()-1];
            }
            cout<<endl;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}