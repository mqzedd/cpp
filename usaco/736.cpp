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
bool isDisjoint(unordered_set<char> s1, unordered_set<char> s2){
    if(sz(s2) > sz(s1)) return isDisjoint(s2,s1);
    for(const auto & x : s1){
        if(s2.count(x) != 0) return false;
    }
    return true;
}
void setIO(const string& name) {
    freopen((name + ".in").c_str(), "r", stdin);
    freopen((name + ".out").c_str(), "w", stdout);
}
int32_t main()
{
    setIO("cownomics");
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    ll n,m; cin >> n >> m;
    vector<unordered_set<char>> counts(m);
    rep(_,0,n){
        string cur;
        cin >> cur;
        rep(i,0,m){
            counts[i].insert(cur[i]);
        }
    }

    vector<unordered_set<char>> counts2(m);
    rep(_,0,n){
        string cur;
        cin >> cur;
        rep(i,0,m){
            counts2[i].insert(cur[i]);
        }
    }
    int count = 0;
    rep(i,0,m){
        if(isDisjoint(counts[i],counts2[i])) count++;
    }
    cout << count << endl;
}