#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a{1};
    ll b, c, d;
    ll v;
    map<ll, ll> m;
    cin >> a;
    while (a--)
    {
        cin >> b >> c >> d;
        v = 240 * b + 12 * c + d;
        m[v]++;
    }
    int max = -1;
    for (auto &[key, val] : m)

    {
        if (val > max)
        {
            max = val;
        }
    }

    cout << max;
}