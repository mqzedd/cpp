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
    vll winners{};
    vll bought{};
    ll winnings{};
    int b{};
    cin >> a;
    while (a--)
    {
        cin >> b;
        winners.push_back(b);
    }
    cin >> a;
    while (a--)
    {
        cin >> b;
        bought.push_back(b);
    }
    for (auto &x : bought)
    {
        auto it = (lower_bound(winners.begin(), winners.end(), x));
        if (it != winners.end() && *it == x)
        {
            int index = it - winners.begin();
            winnings += index + 1;
        }
    }
    cout << winnings;
}