
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
    int b{};
    set<int> win{};
    vector<int> ticket{};
    unordered_map<int, int> wins{};
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        if (wins.count(b) == 0)
        {
            wins[b] = i + 1;
        }
    }
    cin >> a;
    ll cost = 0;
    while (a--)
    {
        cin >> b;
        if (wins.count(b))
        {
            cost += wins[b];
        }
        cost -= 5;
    }
    cout << cost;
}