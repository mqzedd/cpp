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
    set<int> q;
    cin >> a;
    while (a--)
    {
        cin >> b;
        q.insert(b);
    }
    cin >> a;
    while (a--)
    {
        cin >> b;
        if (q.count(b))
            continue;
        auto iter = q.lower_bound(b);
        q.insert(b);
        if (iter == q.end())
            continue;
        cout << "A greedy member at " << b << " has pushed in front of the member at " << *iter << ", this is terrible\n";
    }
}