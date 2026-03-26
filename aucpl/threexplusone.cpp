#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
#define f first
#define s second
#define sz(x) int((x).size())

ll collatz(ll x)
{
    ll steps = 0;
    while (x != 1)
    {
        if (x % 2 == 0)
        {
            x /= 2;
        }
        else
        {
            x = 3 * x + 1;
        }
        steps++;
    }
    return steps;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a;
    cin >> a;
    ll msteps = 0;
    ll idx = 1;

    for (int i = 1; i <= a; i++)
    {
        if (collatz(i) > msteps)
        {
            msteps = collatz(i);
            idx = i;
        }
    }
    cout << idx;
}