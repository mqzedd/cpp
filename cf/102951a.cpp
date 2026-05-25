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
    ll n;
    cin >> n;
    vector<int> xval(n);
    vector<int> yval(n);
    rep(i,0,n){
        cin >> xval[i];
    }
    rep(i,0,n){
        cin >> yval[i];
    }
    int mdist = 0;
    rep(i,0,n){
        rep(j,i+1,n){
            mdist = max(mdist,(xval[j]-xval[i])*(xval[j]-xval[i]) +(yval[j]-yval[i])*(yval[j]-yval[i]));
        }
    }
    cout << mdist << endl;
}