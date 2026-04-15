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
    ll a;
    cin >> a;
    vll h(a);
    for (int i = 0; i < a; i++)
    {
        cin >> h[i];
    }
    sort(all(h));
    ll md = LLONG_MAX;
    pii t;
    for (int i = 1; i < a; i++)
    {
        ll c = h[i] - h[i - 1];
        if (c < md)
        {
            md = c;
            t = {h[i - 1], h[i]};
        }
    }
    cout << t.first << ' ' << t.second << '\n';
}