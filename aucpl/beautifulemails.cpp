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
    ll num = 1;
    ll count = 0;
    while(num < a){
        rep(i,1,10){
            if(a % (num * i) == 0){
                count++;
            }
        }
        num = num * 10 + 1;
    }
    cout << count << endl;
}