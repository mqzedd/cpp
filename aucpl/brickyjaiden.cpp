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
    ll a = 3;
    vi b1(3);
    vi b2(3);
    rep(i,0,a){
        cin >> b1[i];
    }
    rep(i,0,a){
        cin >> b2[i];
    }
    sort(all(b1));
    sort(all(b2));
    rep(i,0,a){
        if(b1[i] < b2[i]){
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
}