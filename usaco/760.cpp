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
    setIO("shuffle");
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    ll n; cin >> n;
    vi a(n);
    rep(i,0,n){
        cin >> a[i];
    }
    vi cow(n);
    rep(i,0,n){
        cin >> cow[i];
    }
    for(int _ = 0; _ < 3;_++){
        vi ncow(n);
        rep(i,0,n){
            ncow[i] = cow[a[i]-1];
        }
        cow = ncow;
    }
    for(auto x : cow){
        cout << x << endl;
    }
}