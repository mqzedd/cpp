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
    setIO("promote");
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int b1, b2, s1, s2, g1, g2, p1, p2;
    cin >> b1 >> b2 >> s1 >> s2 >> g1 >> g2 >> p1 >> p2;
    int gp = p2 - p1;
    int sg = g2 - g1 + gp;
    int bs = s2 - s1 + sg;
    cout << bs << '\n';
    cout << sg << '\n';
    cout << gp << '\n';
}