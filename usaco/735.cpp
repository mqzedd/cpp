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

void setIO(const string &name)
{
    freopen((name + ".in").c_str(), "r", stdin);
    freopen((name + ".out").c_str(), "w", stdout);
}
int main()
{
    setIO("lostcow");
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll x, y, next;
    ll diff = -2;
    cin >> x >> y;
    ll distance;
    next = x;
    while (next != y)
    {
        next = x + diff;
        if ((x <= y && y <= next) || (x >= y && y >= next))
        {
            dist +=
        }
    }
}