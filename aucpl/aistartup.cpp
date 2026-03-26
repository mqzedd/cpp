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
    ll n, m;
    cin >> n >> m;
    vll a(n);
    for (auto &x : a)
        cin >> x;
    sort(all(a));
    for (int i = 1; i < n; i++)
    {
        a[i] += a[i - 1];
    }
    ll x;
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        cout << upper_bound(all(a), x) - a.begin() << '\n';
    }
}