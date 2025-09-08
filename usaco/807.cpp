#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
void setIO(const string &name)
{
    freopen((name + ".in").c_str(), "r", stdin);
    freopen((name + ".out").c_str(), "w", stdout);
}
int main()
{
    setIO("teleport");
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int dist = min({abs(b - a), abs(c - a) + abs(b - d), abs(d - a) + abs(b - c)});
    cout << dist;
}