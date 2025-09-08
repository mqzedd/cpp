#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a{};
    cin >> a;
    ll hands = 0;
    string b;
    unordered_map<string, ll> cards;
    for (ll i = 0; i < a; i++)
    {
        cin >> b;
        cards[b]++;
    }
    for (auto &[i, i2] : cards)
    {
        if (i2 < 2)
            continue;
        for (auto &[j, j2] : cards)
        {

            if (i == j)
                continue;

            if (j2 < 3)
                continue;
            hands += 1ll * i2 * (i2 - 1) / 2 * 1ll * j2 * (j2 - 1) * (j2 - 2) / 6;
        }
    }
    long double total = (1.0L * a * (a - 1) * (a - 2) * (a - 3) * (a - 4)) / 120.0L;
    long double prob = hands / total;
    cout << prob;
}