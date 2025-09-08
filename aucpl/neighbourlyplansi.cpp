#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a, b;
    ll x, y;
    vector<pll> tom;

    vector<pll> pat;
    cin >> a;
    while (a--)
    {
        cin >> x >> y;
        tom.emplace_back(x, y);
    }
    cin >> b;

    while (b--)
    {
        cin >> x >> y;
        pat.emplace_back(x, y);
    }
    ll mind = LLONG_MAX;
    int bestpatx, bestpaty, besttomx, besttomy;
    ll dist;
    for (auto &[x1, y1] : tom)
    {
        for (auto &[x2, y2] : pat)
        {
            dist = 1ll * (x2 - x1) * (x2 - x1) + 1ll * (y2 - y1) * (y2 - y1);
            if (dist < mind && dist >= 1)
            {
                mind = dist;
                besttomx = x1;
                besttomy = y1;
                bestpatx = x2;
                bestpaty = y2;
            }
        }
    }
    cout << besttomx << ' ' << besttomy << '\n';
    cout << bestpatx << ' ' << bestpaty << '\n';
}