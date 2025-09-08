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
    ll a;
    cin >> a;
    ll c;
    ll d = LLONG_MAX;
    vll b;
    ll max = 0;
    ll cur = 0;
    while (a--)
    {
        cin >> c;
        if (c < d)
        {
            //     cout << c << ' ' << d << ' ' << cur + 1 << '\n';
            cur++;
            if (cur > max)
            {
                max = cur;
            }
        }
        else
        {
            cur = 1;
        }
        d = c;
    }
    cout << max;
}