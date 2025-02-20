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
    int n = 3;
    char v[n][n];
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            char x; cin>>x;
            v[i][j] =x;

        }
    }


    int a,b;
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            
            if(v[i][j] == '?')
            {
               
                if(j == 0)
                {
                    if((v[i][1] == 'A' || v[i][1]== 'B') && (v[i][2] == 'A' || v[i][2] == 'B'))  cout<<"C"<<endl; 
                    if((v[i][1] == 'A' || v[i][1]== 'C') && (v[i][2] == 'A' || v[i][2] == 'C')) cout<<"B"<<endl;
                    if((v[i][1] == 'C' || v[i][1]== 'B') && (v[i][2] == 'C' || v[i][2] == 'B')) cout<<"A"<<endl;
                    return;
                }
                else if(j == 1)
                {
                    if((v[i][0] == 'A' || v[i][0]== 'B') && (v[i][2] == 'A' || v[i][2] == 'B'))  cout<<"C"<<endl; 
                    if((v[i][0] == 'A' || v[i][0]== 'C') && (v[i][2] == 'A' || v[i][2] == 'C')) cout<<"B"<<endl;
                    if((v[i][0] == 'C' || v[i][0]== 'B') && (v[i][2] == 'C' || v[i][2] == 'B')) cout<<"A"<<endl;
                    return;
                }
                else if(j== 2)
                {
                    if((v[i][1] == 'A' || v[i][1]== 'B') && (v[i][0] == 'A' || v[i][0] == 'B'))  cout<<"C"<<endl; 
                    if((v[i][1] == 'A' || v[i][1]== 'C') && (v[i][0] == 'A' || v[i][0] == 'C')) cout<<"B"<<endl;
                    if((v[i][1] == 'C' || v[i][1]== 'B') && (v[i][0] == 'C' || v[i][0] == 'B')) cout<<"A"<<endl;
                    return;
                }
            }
            
        }
    }


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