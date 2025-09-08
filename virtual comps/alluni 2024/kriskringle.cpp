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
    string b;
    set<string> c;
    set<string> d;
    string e;
    cin >> a;
    while (a--)
    {
        cin >> b >> e;
        c.insert(b);
        d.insert(e);
    }
    for (auto &i : c)
    {
        if (find(d.begin(), d.end(), i) == d.end())
        {
            cout << i;
        }
    }
}