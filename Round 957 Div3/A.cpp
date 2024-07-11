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
const int N = 2e5 + 5;
const int INF = 1e18;
int md = 998244353;

void solve()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0; i<3; i++)
    {
        int x;
        cin>>x;
        pq.push(x);
    }
    int rm=5;
    while(rm>0)
    {
        int a=pq.top();
        pq.pop();
        int b=pq.top();
        pq.pop();
        int mn=min(rm, b-a);
        a+=mn;
        rm-=mn;
        if(mn==0)
        {
            if(rm>=2)
            {
                a++, b++;
                rm-=2;
            }
            else if(rm==1)
            {
                b++;
                rm-=1;
            }
        }
        pq.push(a), pq.push(b);
    }
    int a=pq.top();
    pq.pop();
    int b=pq.top();
    pq.pop();
    int c=pq.top();
    pq.pop();
    cout<<a*b*c<<endl;



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

