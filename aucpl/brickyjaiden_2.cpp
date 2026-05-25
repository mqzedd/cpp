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
    vi d1(3), d2(3);
    cin >> d1[0] >> d1[1] >> d1[2] >> d2[0] >> d2[1] >> d2[2];
    sort(all(d1));
    sort(all(d2));
    cout << (d1[0] >= d2[0] && d1[1] >= d2[1] && d1[2] >= d2[2] ? "Yes\n" : "No\n");
}