#include <bits/stdc++.h>
using namespace std;

#define int long long

#define FOR(i, a, b) for (int i = a; i < (b); ++i)
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
int32_t main() {
    // setIO("lostcow");
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    ll x, y;
    cin >> x >> y;
    ll xog = x;
    int direction = 1;
    int step = 1;
    int distance = 0;
    while (true) {
        ll nx = xog + direction * step; 
        if((x <= y && y <= nx )||(nx <= y && y <= x)){
            distance +=  abs(y-x);
            cout << distance << endl;
            break;
        }
        distance += abs(x- nx);
        x = nx;
        direction *= -1;
        step *= 2;
    }
}