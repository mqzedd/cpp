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
    ll n,m; cin >> n >> m;
    vector<int> s(m,0), p(m,0);
    vector<char> DNA{'A','C','G','T'};
    rep(_,0,n){
        string cur;
        cin >> cur;
        rep(i,0,m){
            auto x = cur[i];
            s[i] |= 1<<(find(all(DNA),x) - DNA.begin());
    }
}
    rep(_,0,n){
        string cur;
        cin >> cur;
        rep(i,0,m){
            auto x = cur[i];
            p[i] |= 1<<(find(all(DNA),x) - DNA.begin());
    }
}
ll count  = 0;
    rep(i,0,m){
        if(!(s[i] & p[i])) count++;
    }
    cout << count << endl;
}