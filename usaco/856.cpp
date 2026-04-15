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
void setIO(const string& name) {
    freopen((name + ".in").c_str(), "r", stdin);
    freopen((name + ".out").c_str(), "w", stdout);
}
int32_t main()
{
    setIO("blist");
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    ll n; cin >> n;
    vi s(n), t(n), b(n);
    unordered_map<int,int> times;
    rep(i,0,n) cin >> s[i] >> t[i] >> b[i];
    rep(i,0,n){
        rep(_,s[i],t[i]){
            times[_]+=b[i];
        }
    }
    ll buckets = 0;
    for(auto x : times){
        buckets = max(buckets,x.second);
        // cerr << x.second << endl;
    }
    cout << buckets << endl;
}