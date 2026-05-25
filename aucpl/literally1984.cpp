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
    ll b = sqrt(a);
    ll num = 0;
    for(int i = b;i > 0;i--){
        if(a % i == 0){
            num = a/i;
            break;
        }
    }
    ll num2 = a/num;
    cout << (num2 + 1) * num + (num+1) * num2 << endl;

    
}