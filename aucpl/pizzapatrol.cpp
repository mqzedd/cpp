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
    int d{};
    cin >> a;
    set<int> c;
    while (a--)
    {
        cin >> b;
        c.emplace(b);
    }
    cin >> a;
    while (a--)
    {

        cin >> b;
        if (c.find(b) != c.end())
            continue;
        auto d = c.emplace(b);
        if (d.first == c.end())
            continue;
        int e =
            *(++d.first);
        if (e < b)
            cerr << *d.first << ' ' << *c.end() << '\n';
        continue;
        cout << "A greedy member at " << b << " has pushed in front of the member at " << e << ", this is terrible\n";
    }
}