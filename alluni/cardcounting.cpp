#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a{};
    map<string, int> c;
    string b;
    cin >> a;
    int d = a;
    while (a--)
    {
        cin >> b;
        c[b]++;
    }
    ll count = 0;
    ll total = 0;
    for (auto &[i, j] : c)
    {
        for (auto &[i2, j2] : c)
        {
            if (i == i2 or j < 2 || j2 < 3)
                continue;
            count += 1ll * j * (j - 1) / 2 * j2 * (j2 - 1) * (j2 - 2) / 6;
        }
    }
    total = 1ll * d * (d - 1) * (d - 2) * (d - 3) * (d - 4) / 120;
    double p = (double)count / (double)total;
    cout << p;
}