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

    ll t; cin >> t;
    rep(i,0,t){
        ll n; cin >> n;
        vector<int> c(n);
        rep(i,0,n){
            cin >> c[i];
        }
        ll an1,an2;
        vector<ll> c2(n);
        rep(i,0,n){
            if(i != n-1){
                c2[i+1] = c[i];
            }else{
                c2[0] = c[i];
            }
        }
        vector<ll> dp(n+1,INT_MAX);
        dp[0] = c[0];
        dp[1] = c[1];
        dp[2] = c[2];
        for(int i = 3;i < sz(c);i++){
            dp[i] = min({dp[i-1],dp[i-2],dp[i-3]}) + c[i];
            // cout << dp[i] << endl;
        }
        an1 = min(dp[n],dp[n-1]);
        vector<ll> dp2(n+1,INT_MAX);
        dp2[0] = c2[0];
        dp2[1] = c2[1];
        dp2[2] = c2[2];
        for(int i = 3;i < sz(c);i++){
            dp2[i] = min({dp2[i-1],dp2[i-2],dp2[i-3]}) + c2[i];
        }
        an2 = min(dp2[n],dp2[n-1]);
        cout << min(an1,an2) << endl;

    }
}