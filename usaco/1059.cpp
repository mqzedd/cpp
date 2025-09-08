#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vll d;
    int a, c, b = 7;
    while (b--)
    {
        cin >> c;
        d.push_back(c);
    }
    sort(d.begin(), d.end(), greater<ll>());
    a = d[0] - d[1];
    b = d[0] - d[2];
    c = d[0] - b - a;
    cout << a << ' ' << b << ' ' << c;
}