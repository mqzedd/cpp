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
    string b, c;
    cin >> a;
    vector<pair<string, string>> v{};
    while (a--)
    {
        cin >> b >> c;
        v.emplace_back(b, c);
    }
    sort(v.begin(), v.end(), [](auto &lhs, auto &rhs)
         { return lhs.second + lhs.first > rhs.second + rhs.first; });
    for (auto &i : v)
    {
        cout << i.first << ' ' << i.second << '\n';
    }
}