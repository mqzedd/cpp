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
    vi s(n+1,0);
    rep(i,0,n){
        cin >> s[i];
    }
    sort(all(s));
    int count = 0;
    for(int i  = 0;i < n ; i++){
        count += s[i] * (i+1);
    }
    if(n!= 1){
    count -= s[n-1];}
    cout << count << endl;

}