#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
#define f first
#define s second
#define sz(x) int((x).size())

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a, b;
    ll c = 0;
    vll d;
    cin >> a;
    d.push_back(0);
    while (a--)
    {
        cin >> b;
        c += b;
        d.push_back(c);
    }
    cin >> a;
    ll e;
    while (a--)
    {
        cin >> b >> c;
        e = d[c + 1] - d[b];
        if (e < 0)
        {
            e -= 10;
        }
        if (e > 0)
        {
            e += 10;
        }
        if (e == 0)
        {
            e = 100;
        }
        cout << e << '\n';
    }
}