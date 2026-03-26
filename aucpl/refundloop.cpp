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
    ll total = 0;
    vll prices(a);
    for (int i = 0; i < a; i++)
    {
        cin >> prices[i];
    }
    for (int i = 1; i < a; i++)
    {
        if (prices[i] - prices[i - 1] > 0)
        {
            total += prices[i] - prices[i - 1];

            // cerr << total << '\n';
        }
    }
    // cerr << total << '\n';
    total -= prices.back();
    cout << total;
}