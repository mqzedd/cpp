#include <bits/stdc++.h>
using namespace std;

#define int long long

#define rep(i, a, b) for (int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define endl '\n'

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<ll> vi;

ll INF = 1e18;

int solve(){
    ll n; cin >> n;
    vi c(n);
    for(auto &x : c) cin >> x;
    if(n <= 3){
        cout << *min_element(all(c)) << endl;
        return 0;
    }
    ll ans = INF;
    rep(_,0,4){
    vi dp(n-1,INF);
    dp[0] = c[0];
    rep(i,1,n-1){
        rep(j,max((long long)0,i-3),i){
            dp[i] = min(dp[i],dp[j] + c[i]);
        }
        // cout << ans << endl;
    }
    ans = min({ans,dp[n-2],dp[n-3]});
    rotate(c.begin(),c.begin()+1,c.end());
    }
    cout << ans << endl;
    return 0;
}
int32_t main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    ll t; cin >> t;
    while(t--){
    solve();}
}