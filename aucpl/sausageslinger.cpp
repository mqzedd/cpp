#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
#define f first
#define s second
#define sz(x) int((x).size())
#define all(x) (x).begin(), (x).end()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vll p(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    ll m;
    cin >> m;
    vll q(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> q[i];
    }
    ll ma = p.back();
    for (auto x : q)
    {
        if (x > ma)
        {
            cout << "-1\n";
        }
        else
        {
            cout << *lower_bound(all(p), x)
                 << '\n';
        }
    }
}