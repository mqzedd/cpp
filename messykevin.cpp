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
    vi c{};
    cin >> a >> b;
    a = a + b;
    while (a--)
    {
        cin >> b;
        c.push_back(b);
    }
    sort(c.begin(), c.end());
    for (auto &i : c)
    {
        cout << i << ' ';
    }
}