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
    vi x(n);
    rep( i ,0,n){
        cin >> x[i];
    }
    vi sub(n-1);
    rep(i,0,n-1){
        sub[i] = x[i+1] - x[0];
    }
    // cerr << "running\n";
    ll g = sub[0];
    for(auto x : sub){
        g = gcd(g,x);
    }
    cout << g << endl;
}