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
    setIO("blocks");
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    ll n; cin >> n;
    vector<int> counts(26,0);
    vector<int> word1(26,0);
    vector<int> word2(26,0);
    string w1,w2;
    rep(i,0,n){
        cin >> w1 >> w2;
    for(auto x : w1){
        word1[x-'a']++;
    }
    for(auto x : w2){
        word2[x-'a']++;
    }
    rep(j,0,26){
        counts[j]+= max(word1[j],word2[j]);
    }
    word1.assign(26,0);
    word2.assign(26,0);
    }
    for(auto x : counts){
        cout << x << endl;
    }
}