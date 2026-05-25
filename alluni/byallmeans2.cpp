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
    ll d1,d2,rd,carry;
    carry = 0;
    for(int i = n-1;i >= 0; i--){

        if(i != 0){
        d1 = ((s[i] - 'a') + (t[i] - 'a')) - carry;
        d2 = ((s[i-1] - 'a') + (t[i-1] - 'a')) % 2;
        rd = ((d1 + (26 * d2))/2);
        carry = (d1 + (26 * d2))/26;
        // cout << d1 << ' ' << d2 << ' ' << rd << endl;
        }
        else{
            rd = ((s[i] - 'a') + (t[i] - 'a') - carry)/2;
        }
        answer[i] = rd;
    }
    
        string ans;
        for(auto x : answer){
            ans += 'a' + x;
        }
        cout << ans;
}