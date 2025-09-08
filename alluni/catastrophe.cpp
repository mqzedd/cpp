#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    vi c;
    vi t;
    int a;
    cin >>
        n >> q;
    while (n--)
    {
        cin >> a;
        c.push_back(a);
    }
    while (q--)
    {
        cin >> a;
        t.push_back(a);
    }
    vi prefixsum((int)c.size() + 1);
    for (int i = 0; i < (int)c.size(); i++)
    {
        prefixsum[i + 1] = prefixsum[i] + c[i];
    }
    for (auto &i : t)
    {
        cout << --upper_bound(prefixsum.begin(), prefixsum.end(), i) - prefixsum.begin() << '\n';
    }
}