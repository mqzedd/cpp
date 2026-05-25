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
    ll a; cin >> a;
    string temp;
    unordered_set<string> like;
    rep(i,0,a){
        cin >> temp;
        like.insert(temp);
    }
    ll p; cin >> p;
    string pub, drink;
    unordered_map<string,int> menus;
    set<string> seen;
    rep(i,0,p){
        seen.clear();
        cin >> pub >> drink;
        if(like.count(drink) && !seen.count(drink)){
            menus[pub]++;
            seen.insert(drink);
        }
    }
    ll mdrink = 0;
    string mbar = "";
    for( auto [k,v] : menus){
        // cout << k << ' ' << v << endl;
        if(v > mdrink){
            // cerr << "BOOO\n";
            mdrink = v;
            mbar = k;
            // cerr << k << ' ' << mbar << endl;
        }else if (v == mdrink){
            if(mbar == "" || mbar > k){
                mbar = k;
            }
        }
    }
    if(mbar ==  ""){
        cout << "none\n";
    }else{
    cout << mbar << endl;
}}