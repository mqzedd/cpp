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
    ll n; cin >> n;
    string s,t;
    vector<int> answer(n);
    cin >> s >> t;
    ll carry;
    vector<ll> sums(n);
    carry = 0;
    ll cur;
    for(int i = n-1;i >= 0; i--){
        sums[i] = ((s[i] - 'a') + (t[i] - 'a'));
    }
    vector<ll> checkans;
    rep(i,0,n){
        cur = (sums[i] + carry * 26 ) / 2;
        checkans.push_back(cur);
        carry = (sums[i] + carry * 26 ) % 2;
        answer[i] = cur;
    }
    ll a,b;
        string ans;
        for(int i = n-1; i >0;i--){
            a = answer[i] % 26;
            b = answer[i] / 26;
            answer[i-1] += b;
            answer[i] = a;
        }
        for(auto x : answer){
            ans += 'a' + x;
            // cout << "YES\n";
        }
        cout << ans;
}