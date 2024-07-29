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
    for(int i=0; i<n-1; i++) cin>>a[i];
    vector<int>ans;
    int it=0;
    for(int i=0; i<n-1; i++)
    {
        ans.pb((it|a[i]));

        it=a[i];
    }
    ans.pb(a[n-2]);
    for(int i=0; i<n-1; i++)
    {
        if((ans[i]&ans[i+1])!=a[i])
        {
            neg;
            return;
        }
    }
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

