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
bool ordered(const pair<int,int>& pin, const vector<vector<int>>& orders){
    for(const auto &x : orders){
        int f = find(all(x),pin.first) - x.begin();
        int s = find(all(x),pin.second) - x.begin();
            if(f > s) return false;
    }
    return true;
}
void setIO(const string& name) {
    freopen((name + ".in").c_str(), "r", stdin);
    freopen((name + ".out").c_str(), "w", stdout);
}
int32_t main()
{
    setIO("gymnastics");
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    vector<set<int>> d;
    ll k,n;cin >> k >> n;
    vector<vi> scores;
    vi cur;
    int c;
    rep(i,0,k){
        rep(j,0,n){
            cin >> c;
            cur.push_back(c);
        }
        scores.push_back(cur);
        cur.clear();
    }
    int count = 0;
    rep(i,0,n){
        rep(j,0,n){
            if(i != j){
                if(ordered({i+1,j+1},scores)) count++;
            }
        }
    }
    cout << count << endl;
}