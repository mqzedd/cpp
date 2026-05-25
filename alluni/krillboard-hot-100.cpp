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
    ll m,n; cin >> m >> n;
    string s;
    ll c;
    ll u;
    ll d;
    vector<pair<ll,string>> songs;
    rep(i,0,m){
        cin >> s >> c >> u >> d;
        ll cur = c * 100 + n * (u-d);
        songs.push_back({cur,s});
    }
    sort(songs.rbegin(),songs.rend());
    for(auto x : songs){
        auto str = x.second;
        cout << str << ' ';
    }
    cout << endl;
}