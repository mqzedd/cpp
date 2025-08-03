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
    int b{};
    int c{};
    vector<pair<int, int>> ray{};
    cin >> a;
    while (a--)
    {
        cin >> b >> c;
        ray.emplace_back(b, c);
    }

    vector<pair<int, int>> justin{};
    cin >> a;
    while (a--)
    {
        cin >> b >> c;
        justin.emplace_back(b, c);
    }
    ll mdist{-1};
    pair<int, int> rbest{};
    pair<int, int> jbest{};
    for (auto &i : ray)
    {
        for (auto &j : justin)
        {
            ll dx = (1ll * i.first - j.first);
            ll dy = (1ll * i.second - j.second);
            ll dist = dx * dx + dy * dy;

            if (dist > mdist)
            {
                mdist = dist;
                rbest = i;
                jbest = j;
            }
        }
    }
    cout << rbest.first << ' ' << rbest.second << '\n';

    cout << jbest.first << ' ' << jbest.second << '\n';
}