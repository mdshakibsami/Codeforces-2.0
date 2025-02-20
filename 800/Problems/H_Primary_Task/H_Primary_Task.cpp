#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define all(a) a.begin(), a.end()
#define show(a)           \
    for (auto i : a)      \
        cout << i << ' '; \
    cout << endl;
#define showMP(a)    \
    for (auto i : a) \
        cout << i.first << ' ' << i.second << endl;
const int MOD = 1e9 + 7;

void solve()
{
    string s;
    cin >> s;

    if (s.size() > 2)
    {
        string t = "";
        if (s.substr(0,2) == "10")
        {
            for (int i = 2; i < s.size(); i++)
            {
                t += s[i];
            }
            if (t[0] == '0')
                cout << "NO" << endl;
            else
            {
                int x = stoll(t);
                if (x > 1)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
        else
            cout << "NO" << endl;
    }
    else cout<<"NO"<<endl;
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