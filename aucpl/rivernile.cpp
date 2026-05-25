#include <bits/stdc++.h>
using namespace std;

#define int long long

#define rep(i, a, b) for (int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define endl '\n'

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int32_t main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    ll n; cin >> n;
    vector<vector<pii>> adj;
    ll s,e,p;
    rep(i,0,n-1){
        cin >> s >> e >> p;
        adj[s].push_back({e,p});
    }
    ll x; cin >> x;
    vi q(x);
    rep(i,0,x){
        cin >> q[i];
    }

}