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
    setIO("circlecross");
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    string cc; cin >> cc;
    auto crossing = [=](char a,char b){
        int fa = find(all(cc),a) - cc.begin();
        int fb = find(all(cc),b) - cc.begin();
        int la = cc.find_last_of(a);
        int lb = cc.find_last_of(b);
        return ((fa < fb && fb < la) && (fb < la && la < lb));
    };
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    vector<pair<char,char>> combos;
    for(auto x : alphabet){
        for(auto y : alphabet){
            if(x != y){
                combos.push_back({x,y});
            }
        }
    }
    ll count = 0;
    for(auto pr : combos){
        if(crossing(pr.first,pr.second)) count++;
    }
    cout << count << endl;
}