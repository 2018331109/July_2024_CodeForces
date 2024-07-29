#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define neg cout << -1 << endl
#define pb push_back
#define ss second
#define ff first

const int mod = 1e9 + 7;
const int N = 1e5 + 5;
const int INF = 1e18;
int md = 998244353;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    int mn=INT_MAX, mx=INT_MIN;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        mx=max(mx, a[i]);
        mn=min(mn, a[i]);
    }
    int f=0;
    vector<int>ans;
    for(int i=0; i<40; i++)
    {
        int d=mx+mn;
        if(d%2)
        {
            neg;
            return;
        }
        d/=2;
        ans.pb(d);
        mx=INT_MIN, mn=INT_MAX;
        for(int i=0; i<n; i++)
        {
            a[i]=abs(a[i]-d);
            mx=max(mx, a[i]), mn=min(mn, a[i]);
        }
    }
    cout<<ans.size()<<endl;
    for(auto it:ans) cout<<it<<" ";
    cout<<endl;


}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test=1;
    cin >> test;
    for (int tc = 0; tc < test; tc++)
    {
        solve();
    }

    return 0;
}

